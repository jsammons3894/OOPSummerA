//Header file
//Definition of the class

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Route{

private: //acess specifier... // When we have this complicated logic, it is no longer a structure- now its a class!
    std::string source;
    std::string destination;
    int length;


    void updateLength();

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

    //second constructor no argument second version
    Route();

    //Constructor with arguments //Overloaded constructor

    Route(const std::string& source, const std::string& destination);

    //get functions (Acessor functions, getters)
    std::string getSource();
    std::string getDestination();
    int getLength();

    // set functions (mutator function, setters)

    void setSource(const std::string& new_source);
    void setDestination(const std::string& new_destination);
    //not length because we are doing this seperately
    //print method
    void print();
};