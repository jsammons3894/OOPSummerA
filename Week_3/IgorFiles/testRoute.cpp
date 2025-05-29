#include <cstdlib>
#include <ctime>
#include "Route.h"

int main() {
    srand(time(0));

    Route summer_trip;
    summer_trip.print();
  
    summer_trip.setSource("Lakeland");
    summer_trip.setDestination("Chicago");    
   
    summer_trip.print();
    
    summer_trip.setSource("Tampa");
    summer_trip.print();
    
    Route fall_trip("Orlando", "Vegas");
    fall_trip.print();


    // Creating objects
    Route route1; //no-arg constructor
    Route route2("A", "B"); //constructor with arguments
    Route route3 = Route(); //no-arg constructor
    Route route4(); //NOT AN OBJECT. Function prototype


    return 0;
}