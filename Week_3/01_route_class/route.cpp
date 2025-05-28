#include <iostream>
#include <string>

class Route { //class class class!!!


private: //acess specifier... // When we have this complicated logic, it is no longer a structure- now its a class!
    std::string source;
    std::string destination;
    int length;

public:
    //get functions (Acessor functions, getters)
    std::string getSource(){
        return source;
    }
    std::string getDestination(){
        return destination;
    }
    int getLength(){
        return length;
    }

    // set functions (mutator function, setters)

    void setSource(const std::string& new_source){
        source = new_source;
    }
    void setDestination(const std::string& new_destination){
        destination = new_destination;
    }
    //not length because we are doing this seperately

};


void printRoute(Route& route){

std::cout << route.getSource() << " -> " << route.getDestination() << ", " << route.getLength() << std::endl;


}

int main () {

    Route summer_trip;
    summer_trip.setSource("Lakeland");
    summer_trip.setDestination("Chicago");
    //summer_trip.length = 800;
    printRoute(summer_trip);

}