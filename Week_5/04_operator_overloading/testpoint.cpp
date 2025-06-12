#include "point.h"
#include <iostream>

int main () {
    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(89, 55);

    std::cout << p1.toString() << std::endl;


    std::cout << (p1 == p2) << std::endl;

    if (p1 != p2) {
        std::cout << (char) p3[0] << std::endl;
    }
    else {
        std::cout << (char) p3[1] << std::endl;
    }

    p1[0] == 77;

    std::cout << (char) p1[0];

    p1[0] = p1[0] - 59;
    p2[0] = p2[0] + 3;
    Point p4 = (p1 * p2);
    std::cout << (char) (p4[0] - 56);

    Point p5(60, 74);
    p5 += p1;
    std::cout << (char) (p5[1] - 4);

    p5 *= p1;
    for (int i = 0; i < 119; i++){
        p5--;
        --p5;
    }

    std::cout << (char) p5[1];

    Point p6(0, 0"Center")

    return 0;
}