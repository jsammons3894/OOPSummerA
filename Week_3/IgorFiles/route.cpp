#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Route {
private: //access specifier
    std::string source;
    std::string destination;
    int length;

    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }

public:
    // Constructors are called when the object is created
    // Constructors cannot be called explicitely
    // Constructors should be public
    // Constructors have NO return type, they have the same name as class name

    // no argument constructor
    // Route() {
    //     source = "";
    //     destination = "";
    //     length = 0;
    // }

    // no argument constructor second version
    Route() : source("-"), destination("-"), length(0) { 
        std::cout << "No arg constructor\n";
    }

    // constructor with arguments 
    // overloaded constructor
    Route(const std::string& src, const std::string& dest) {
        setSource(src);
        setDestination(dest);
    }

    // get functions (accessor function, getters)
    std::string getSource() {
        return source;
    }
    std::string getDestination() {
        return destination;
    }
    int getLength() {
        return length;
    }

    // set functions (mutator function, setters)
    void setSource(const std::string& new_source) {
        source = new_source;
        updateLength();
    }
    void setDestination(const std::string& new_destination) {
        destination = new_destination;
        updateLength();
    }

    // Print method
    void print() {
        std::cout << getSource() << " -> " << getDestination() << ", " << getLength() <<  std::endl;    
    }

};

void printRoute(Route& route) {
    std::cout << route.getSource() << " -> " << route.getDestination() << ", " << route.getLength() <<  std::endl;
}


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