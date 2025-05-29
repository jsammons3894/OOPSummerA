#include "Pointers.h"

Pointers::Pointers() : pInt(nullptr), pDouble(nullptr) { //Syntax for implementing constructors



}

int* Pointers::getPint() const{
    return pInt;
}

void Pointers::setPint(int *pInt_) {
    pInt = pInt_;
}

int* Pointers::getPdouble() const{
    return pDouble;
}
void Pointers::setPdouble(int *pDouble_) {
    pDouble = pDouble_;
}