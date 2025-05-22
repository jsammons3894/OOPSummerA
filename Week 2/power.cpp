#include <iostream>

int powerRecursive(int base, int exp);

int main() {
    std::cout << powerRecursive(7, 7);

    if (exp == 0){
        return 1;
    }
    else {
        return int base * powerRecursive( base, exp-1);
    }
    return 0;
}

//TODO: WHAT IF EXPONENT IS NEGATIVE??