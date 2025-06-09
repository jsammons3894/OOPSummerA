#ifndef MYVECTOR_H
#define MYVECTOR_H

template <typename T>

class myVector<T> { //lets make it efficient!
public:
    myVector(<T> capacity_);

    //destructor

    ~myVector();

    //copy constructor!! Makes the code secure
    myVector(const myVector<T>& other);

    void print() const; // prints the vector
    void push_back(const int& value); //adds the elemnt at the end
    void clear(); //clears the content of a vector
    void push_front();

private:

    T* data; //dynamic array
    int size; //number of elements
    int capacity; // max numebr of elements

};

#endif