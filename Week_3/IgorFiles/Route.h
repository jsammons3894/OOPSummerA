// Header file
// The definition (description) of the class
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


class Route {
private: //access specifier
    std::string source;
    std::string destination;
    int length;

    void updateLength();

public:
    // no argument constructor second version
    Route();

    // constructor with arguments 
    // overloaded constructor
    Route(const std::string& src, const std::string& dest);

    // get functions (accessor function, getters)
    std::string getSource();
    std::string getDestination();
    int getLength();

    // set functions (mutator function, setters)
    void setSource(const std::string& new_source);
    void setDestination(const std::string& new_destination);

    // Print method
    void print();
};