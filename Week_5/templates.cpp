#include <iostream>
#include <string>

//template functions

//function prototype

template <typename T> //MUST HAVE THIS
T smallest(const T& n1, const T& n2, const T& n3);

int main () {
    int i1 = 5, i2 = 6, i3 = 1;
    std::cout << "The smallest is " << smallest(i1, i2, i3) << std::endl;

    double d1 = 5.6, d2 = -6.5, d3 = 1.7;
    std::cout << "The smallest is " << smallest(d1, d2, d3) << std::endl;

    std::string s1 = "Buy!", s2 = "apples", s3 = "Hello!";
    std::cout << "The smallest is " << smallest(s1, s2, s3) << std::endl;

return 0;
}

template <typename T> //MUST HAVE THIS
T smallest(const T& n1, const T& n2, const T& n3){
//find the smallest between 3 given values

if (n1 <= n2 && n1 <= n3) {
    return n1;
}
else if (n2 <= n1 && n2 <= n3){
    return n2;
}
else return n3;
}