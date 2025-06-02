#include "Dealer.h"
#include <iostream>

void Dealer::showInventory() {
    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].printInfo(); //the ESSENTIAL moment!
    }
}