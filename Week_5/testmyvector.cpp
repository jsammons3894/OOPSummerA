#include "myVector.h"
#include "myVector.cpp"

int main(){
    myVector<int> v(10);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.print();
    v.clear();
    v.~myVector();

    myVector<double> v2(10);
    v2.push_back(1.1);
    v2.push_back(2.2);
    v2.push_back(3.3);
    v2.print();
    v2.clear();
    v2.~myVector();

    //create a vector of characters in the heap
    myVector<char>* charvec = new myVector<char>(10);

    //insert a couple characters into the vectors
    for (i = 0; i < 5; i++) {
        charvec -> push_back(i + 'a');
    }

    //print the content of the vector
    charvec->print();

    //deallocate the memory
    delete charvec;

    return 0;
}