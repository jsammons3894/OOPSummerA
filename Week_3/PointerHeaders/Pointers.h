#ifndef POINTERS_H
#define POINTERS_H

class Pointers {
    public:
    Pointers();

    //get functions

    int* getPint() const;

    //set functions

    void setPint(int *pInt_);

    private:
    int *pInt;
    double *pDouble;
};

#endif