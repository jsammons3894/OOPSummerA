#include <iostream>

class Parent {
    public:
        Parent() {
            std::cout << "Parent. Memory was allocated." << std::endl;
        }
        virtual ~Parent() {
            std::cout << "Parent. Memory was de-allocated." << std::endl;
        }
};

class Child : public Parent {
    public:
        Child() {
            std::cout << "Child. Memory was allocated." << std::endl;
        }
        ~Child() {
            std::cout << "Child. Memory was de-allocated." << std::endl;
        }
};

int main () {
    Parent* p = new Child; //everytime there is a new dynamic memory allocated, we define destructor as virtual! see 'virtual ~Parent'

    delete p;

    return 0;
}