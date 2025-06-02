#include "car.h"
#include "Dealer.h"
#include <iostream>

//A function which checks the efficiency of the car

cool ifEfficient(const Car& car); //takes the object as an argument //We pass objects by refrence, not by actual object


int main (){
    Car ferrari_spider("Ferrari", "Spider", "2023", "20.5");
    Car ferrari_f50("Ferrari", "F50", "2021", "17.5");
    Car ferrari_super_GT("Ferrari", "Super GT", "2008", "12.4");
   
    //create a Dealer object

    Dealer lakeland_ferrari;

    //add cars to dealer inventory

    lakeland_ferrari.addCar(ferrari_spider);
    lakeland_ferrari.addCar(ferrari_f50);
    lakeland_ferrari.addCar(ferrari_super_GT);

    //show inventory

    lakeland_ferrari.showInventory();

    std::cout << isEfficient(lakeland_ferrari.showInventory[1]); //have to acess the inventory first kiddo

    return 0;
}

bool isEfficient(const Car& car) {
    return ((car.getMPG() > 20.0) ? true : false);
}

int countEfficientCars(const Dealer& dealer) {
    int effi_cars = 0;
    //recieves dealer as agrument
    for (const Car& car : dealer.inventory){
        if (isEfficient(car)){
            effi_cars++;
        }
    }
    return effi_cars;
}