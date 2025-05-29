#include "Pointers.h"
//create pointers variable

int main (){
    Pointers p;
    int a = 10;
    int *pA = &a;

    p.setPint(pA);
    std::cout << p.getPint() << std::endl;
    std::cout << *p.getPint() << std::endl;





    return 0;
}