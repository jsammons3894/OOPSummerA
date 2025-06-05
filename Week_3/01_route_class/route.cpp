<<<<<<< HEAD
#include <iostream>
#include <string>
=======
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
>>>>>>> 4627ab3870fc43f4d1dd69ac44d5622cab76b40d

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
