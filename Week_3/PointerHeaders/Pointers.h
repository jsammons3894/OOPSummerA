#ifndef POINTERS_H
#define POINTERS_H

class Pointers {
    public:
    Pointers();

    //oveerloaded constructor (constructor with arguments)
    Pointers(int *pI, double *pD);

    //get functions

    int* getPint() const;
    double* getPdouble() const;

    

    //set functions

    void setPint(int *pInt_);
    void setPdouble(double *pDouble_);

    void setPint(int val);


    //print method
    //the method prints the double value pint number of times d
    void printDoubles() const;


    private:
    int *pInt;
    double *pDouble;
};

#endif