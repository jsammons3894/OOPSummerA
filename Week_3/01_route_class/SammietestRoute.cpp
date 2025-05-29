#include "Route.h"
#include <cstdlib>
#include <ctime>

int main () {

    srand(time(0));

    Route summer_trip;
    summer_trip.setSource("Lakeland");
    summer_trip.setDestination("Chicago");
    //summer_trip.length = 800;

    summer_trip.print(); //make it an internal method of the class, ie, move it up into the class!

    summer_trip.setSource("Tampa");
    summer_trip.print();

    Route fall_trip;
    fall_trip("Orlando", "Vegas");

    //crerating objects
    Route route1; //no-arg constructor
    Route route2("A", "B"); //constrictor with arguments
    Route route3 = Route();
    Route route4(); //NOT an object!! This si a function prototype!!

    return 0;
}