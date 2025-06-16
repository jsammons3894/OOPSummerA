#ifndef D_H
#define D_H

#include "C.h"
#include <iostream>

class D {
public:
    void print() {
        C c;
        std::cout << c.value << std::endl;
    }
private:

};

#endif