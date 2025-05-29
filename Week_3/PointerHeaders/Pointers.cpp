#include "Pointers.h"

Pointers::Pointers() : pInt(nullptr), pDouble(nullptr) { //Syntax for implementing constructors

}

Pointers(int *pI, double *pD){
    setPint(pI);
    setPdouble(pD);
}

int* Pointers::getPint() const{
    return pInt;
}

void Pointers::setPint(int *pInt_) {
    pInt = pInt_;
}


void Pointers::setPdouble(int *pDouble_) {
    pDouble = pDouble_;
}

double* Pointers::getPdouble() const {
    return pDouble;
}

int Pointers::getPintValue() const {
    if (pInt != nullptr) {
        return *pInt;
    }
    return 0;
}