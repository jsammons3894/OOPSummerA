#include <iostream>

//Function that doubles the elements of the array

void doubleArrEl(int* arr, int size);
void printArr(const int* arr, int size);
int* doubleArrElNew(const int* arr, int size);

int main {
    int arr = {1, 2, 3, 4, 5};
    doubleArrEl(arr, 5);
    printArr(arr, 5);

    int* p = doubleArrElNew(arr, 5);
    printArr(p, 5);

    return 0;
}

void doubleArrEl(int* arr, int size){
    for (int i = 0; i < size; i++){
        arr[i] *= 2;
    }
}

void printArr(const int* arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << ' ';
    }
std::cout << std::endl;
}

int* doubleArrElNew(const int* arr, int size){
    int new_arr[size];
    for (int i = 0; i < size; i++){
        
    }
}