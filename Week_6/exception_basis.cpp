#include <iostream>

int quotient(int n1, int n2);

int main() {
    int n1, n2;
    std::cout << "Enter Two numbers: \n";
    std::cin >> n1 >> n2;


    try {
        std::cout << "The result " << quotient(n1, n2) << std::endl;
    }

    catch (int ex) {
        std::cout << "Exception: The number " << ex << " cannot be divided by zero!" << std::endl;
    }
    return 0;
}

int quotient(int n1, int n2) {
    if (n2 == 0) {
        throw n1; //this should only be used for special circumstances that the code would not normally come across!
    }
return n1 / n2;
}