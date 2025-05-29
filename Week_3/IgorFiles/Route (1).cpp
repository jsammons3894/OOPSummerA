// Implementation of the class
#include "Route.h"


void Route::updateLength() {
    length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
}

// no argument constructor second version
Route::Route() : source("-"), destination("-"), length(0) { 
    std::cout << "No arg constructor\n";
}

// constructor with arguments 
// overloaded constructor
Route::Route(const std::string& src, const std::string& dest) {
    setSource(src);
    setDestination(dest);
}

// get functions (accessor function, getters)
std::string Route::getSource() {
    return source;
}
std::string Route::getDestination() {
    return destination;
}
int Route::getLength() {
    return length;
}

// set functions (mutator function, setters)
void Route::setSource(const std::string& new_source) {
    source = new_source;
    updateLength();
}
void Route::setDestination(const std::string& new_destination) {
    destination = new_destination;
    updateLength();
}

// Print method
void Route::print() {
    std::cout << getSource() << " -> " << getDestination() << ", " << getLength() <<  std::endl;    
}

