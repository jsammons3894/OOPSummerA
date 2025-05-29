//Implementation fo the class
#include "Route.h"
#include <string>
    

    void Route::Route::updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }


//second constructor no argument second version
Route::Route() : source("-"), destination("-"), length(0){
    std::cout << "No argument constructor\n";

}

//Constructor with arguments //Overloaded constructor

Route::Route(const std::string& source, const std::string& destination){
    setSource(source);
    setDestination(destination);
}

//get functions (Acessor functions, getters)
std::::string getSource(){
    return source;
}
std::string getDestination(){
    return destination;
}
int Route::getLength(){
    return length;
}

// set functions (mutator function, setters)

void Route::setSource(const std::string& new_source){
    source = new_source;
    updateLength();
}
void Route::setDestination(const std::string& new_destination){
    destination = new_destination;
    updateLength();
}
//not length because we are doing this seperately
//print method
void Route::print(){
    std::cout << getSource() << " -> " << getDestination() << ", " << getLength() << std::endl;

}