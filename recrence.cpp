#include <iostream>

int main () {

    int count = 1;
    int count2 = 1;
    int& r = count; //refrence variable. Should initalize a refrence variable.
    //You cannot change the value of a refrence variable.
    //Assigning the & basicaly links the variables! Any change to r will also happen to count! This can be seen below
    //if r = 10, count will = 10!

    r=10;

    std::cout << r << std::endl;
    std::cout << "count" << count << std::endl;

    return 0;
}