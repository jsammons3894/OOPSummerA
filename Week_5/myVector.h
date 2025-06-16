#ifndef MYVECTOR_H
#define MYVECTOR_H

template <typename T>
class myVector { //lets make it efficient!
public:
    myVector(int capacity_);

    //destructor

    ~myVector();

    //copy constructor!! Makes the code secure
    myVector(const myVector<T>& other);

    void print() const; // prints the vector
    void push_back(const T& value); //adds the elemnt at the end
    void clear(); //clears the content of a vector
    void push_front(const T& value);
    void delete_element(int index);

private:

    T* data; //dynamic array
    int size; //number of elements
    int capacity; // max numebr of elements

};

#endif