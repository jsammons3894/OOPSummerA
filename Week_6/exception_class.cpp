#include <iostream>
#include <stdexcept>

//create our own exception class

class myException : logic_error {
    public:
        myException(const char* msg, int code){


        }

    void PrintInfo() const {
        std::cout << "The exception code is" << exception_code << std::endl;
        std::cout << what() <<std::endl;
    }
    private:
        int exception_code = code;
};

class Fraction {
    public:
        Fraction(int num = 0, int demon = 1) : num(num), denom(demon) {}

        int quotient() const {
            if (denom == 0) {
                throw num;
            }

            else if (num < 0 && denom > 0)  || (num > 0 && denom < 0){
                std::string ex("Cannot handle negative numbers\n");
                throw ex;
            }
            else if (num > 100) {
                throw std::  ("The numerator is greater than expected");
            }
            return num / denom;
        }
    private:
        int num, denom;
};

int main () {
    //test the fraction
    int num, denom;
    std::cout << "Enter two numbers: \n";
    std::cin >> num >> denom;

    Fraction f(num, denom);

    try {
        std::cout << f.quotient() << std::endl;
    }

    catch (int ex) {
        std::cout << "Exception: The number " << ex << " cannot be divided by zero!" << std::endl;
    }
    catch (std::string& ex) {
        std::cout << ex;
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    catch (const myException& ex) {
        ex.PrintInfo;
    }


std::cout << "execution continues";

    return 0;
}