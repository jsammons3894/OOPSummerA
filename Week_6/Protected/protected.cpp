#include <iostream>

class A {
public:
    std::string msg1 = "Message one!";
private:
    //std::string msg2 = "Message two!";
protected:
    std::string msg3 = "Message three!";
};

class B : public A {
public:
    void method() {
        std::cout << msg1 << std::endl; //Public is acessible
        std::cout << msg2 << std::endl; //error 
        std::cout << msg3 << std::endl; //acessible
    }
    
};

int main() {

    B* b = new B; //return address of the object we dynamically allocate, so B* b
    b->method();

    A a;
    std::cout << a.msg1 << std::endl; //fine
    //std::cout << a.msg2 << std::endl; //No access
    //std::cout << a.msg3 << std::endl; //NO access

    delete b;

    return 0;
}