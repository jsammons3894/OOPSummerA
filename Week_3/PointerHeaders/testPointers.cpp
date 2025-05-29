#include "Pointers.h"
#include <iostream>
//create pointers variable

int main (){
    Pointers p;
    int a = 10;
    int *pA = &a;

    p.setPint(pA);
    std::cout << p.getPint() << std::endl;
    std::cout << *p.getPint() << std::endl;

    double d = 1.1;
    double *pD = &d;

    p.setPdouble(pD);
    std::cout << p.getPdouble() << std::endl;
    std::cout << *p.getPdouble() << std::endl;

    return 0;
}