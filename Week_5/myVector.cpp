#include <iostream>
#include "myVector.h"
//type class prototype?

template <typename T>
myVector<T>::myVector(int capacity_) {
    capacity = capacity_;
    size = 0;
    data = new T[capacity]; //allocate new memory as we dont know prior how big this is going to be
}
template <typename T>
myVector<T>::~myVector() {
    delete [] data; //release allocated memory
}
template <typename T>
myVector<T>::myVector(const myVector<T>& other){
    capacity = other.capacity;
    size = other.size;
    //CANNOT DO THE SAME WITH DATA 
    data = new T[capacity];
    //now copy the data
    for(int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
}
template <typename T>
void myVector<T>::push_back(const T& value){
    data[size++] = value;
}
template <typename T>
void myVector<T>::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++){
        std::cout << data[i] << ' ';
    }
    std::cout << "]\n";
}
template <typename T>
void myVector<T>::clear() {
    std::cout << "[";
    for(int i = size; i <= 0; --i){
        std::cout << data[i] << ' ';
        size--;
    }
    std::cout << "]\n";
}
template <typename T>
void myVector<T>::push_front(const T& value) {
    for (int i = size; i > 0; --i) {
        data[i] = data[i - 1];
    }
    data[0] = value;
    ++size;
}