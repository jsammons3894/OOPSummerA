#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Route { //class class class!!!


private: //acess specifier... // When we have this complicated logic, it is no longer a structure- now its a class!
    std::string source;
    std::string destination;
    int length;


    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }

public:

    //constructor are ALWAYS public. They are caleld when the obkect is created
    //constructors cannot be called explicitly
    //they have NO return type
    //they have the same name as class name

    //Route(){ //no argument constructor
      //  source = "";
      //  destination = "";
       // length = 0;
    //}

    second constructor no argument second version
    Route() : source("-"), destination("-"), length(0){
        std::cout << "No argument constructor\n";

    }

    //Constructor with arguments //Overloaded constructor

    Route(const std::string& source, const std::string& destination){
        setSource(src);
        setDestination(dest);
    }

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
        updateLength();
    }
    void setDestination(const std::string& new_destination){
        destination = new_destination;
        updateLength();
    }
    //not length because we are doing this seperately
    //print method
    void print(){
        std::cout << getSource() << " -> " << getDestination() << ", " << getLength() << std::endl;

    }
};


void printRoute(Route& route){

std::cout << route.getSource() << " -> " << route.getDestination() << ", " << route.getLength() << std::endl;


}

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