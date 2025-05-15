#include <iostream>
int x = 10; //this is a global variable- It can be refreneced in ANY of the following functions!

int main () {
    std::cout << x << std::endl;

    int x = 100;
    std::cout << x << std::endl;

    for (int x =0; x < 10; x++) {
        std::cout << x << ' '<< std::endl;
        return;
    }

    return 0;
}