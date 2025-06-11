#include <iostream>
#include <string>


struct route {

std::string source;
std::string destination;

};


void print_route(const struct route&){

std::cout << route.source << "->" << route.destination << std::endl;

}

int main () {

    struct route summer_trip;
    summer_trip.source = "Lakeland";
    summer_trip.destination = "Chicago";

    printroute(summer_trip);

}

=======
struct route {

std::string source;
std::string destination;

};


void print_route(const struct route&){

std::cout << route.source << "->" << route.destination << std::endl;

}

int main () {

    struct route summer_trip;
    summer_trip.source = "Lakeland";
    summer_trip.destination = "Chicago";

    printroute(summer_trip);

}

>>>>>>> f7170eea516dbad92c5a6573ef59ad230aeb61a2