#include "Pointers.h"
#include <iostream>
//create pointers variable

int main (){
    Pointers p;
    int a = 10;
    int *pA = &a;
    double d = 1.1;
    double *pD = &d;

    p.setPint(pA);
    std::cout << p.getPint() << std::endl;
    std::cout << *p.getPint() << std::endl;



    p.setPdouble(pD);
    std::cout << p.getPdouble_() << std::endl;
    std::cout << *p.getPdouble_() << std::endl;

    //create an obkect with the constructor with arguments


    int x = 8;
    double v = 8.888;
    Pointers p2(&x, &v);
    
    
    std::cout << p2.getPint() << std::endl;
    std::cout << p2.getPdouble_() << std::endl;

    return 0;
}