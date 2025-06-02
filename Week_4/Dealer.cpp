#include "Dealer.h"
#include <iostream>

void Dealer::showInventory() const {
    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].printInfo(); //the ESSENTIAL moment!
        std::cout << "---------\n"
    }
}

void Dealer::addCar(const Car& car){
    inventory.pushback(car);
}