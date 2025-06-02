#include "car.h"
#include "Dealer.h"

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

    return 0;
}