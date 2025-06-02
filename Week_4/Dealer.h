#ifndef DEALER_H
#define DEALER_H

class Dealer{
public:
    std::vector<Car> inventory;
    void showInventory() const;
    void addCar(const Car& car); //adds car to inventory of dealer
};

#endif
