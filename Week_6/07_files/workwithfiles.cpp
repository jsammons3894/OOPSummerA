#include<iostream>
#include <iomanip>
#include <fstream>


int main() {
    int** data;
    int rows, columns;
    std::cout << "Enter the number of rows and columns: \n";
    std::cin >> rows >> columns;

    data = new int* [rows];
    for(int i = 0; i < rows; i++){
        data[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++){
            data[i][j] = 0;
            std::cout << std::setw(4) << data[i][j];
        }
        std::cout << '\n';
    }
    //release memory

    for (int i = 0; i < rows; i++) {
        delete [] data [i];
    }
    delete [] data; 

    //read data from a file??

    char path[1000];
    std::cout << "Enter a file path: " <<std::endl;
    std::cin >> path;
    //easiest way: create an object of ifstream

    std::ifstream input(path);

    //check if file opened
    if (input.fail()) {
        std::cout << "No such file\n";
        return -1;
    }

    input >> rows;
    input >> columns;

     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++){
            input >> data[i][j];
            //when do we stop? What if we dont have enough values?
            if (input.eof()){
                break;
            }
        }
    }
    //print the matrix after reading from file
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++){
            std::cout << std::setw(4) << data[i][j];
        }
        std::cout << '\n';
    }

    //write the matrix into a file

    std::ofstream out("out.txt");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++){
            out << std::setw(4) << data[i][j];
        }
        std::cout << '\n';
    }

    input.close();
    out.close();

    return 0;
}