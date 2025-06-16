#ifndef C_H
#define C_H
#include "D.h"

class C {
public:
C() : value(100) {}

friend class D;


private:
 
int value;

};

#endif