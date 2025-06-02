#include "car.h"
#include <iostream>
#include <string>

Car::Car(std::string make_, std::string model_, int year_, double MPG_){
    //get functions?
make = make_;
model = model_;
year = year_;
MPR = MPG_;
}

void Car::printInfo() const {
        std::cout << make << std::endl;
        std::cout << model << std::endl;
        std::cout << year << std::endl;
        std::cout << MPG << std::endl;

}