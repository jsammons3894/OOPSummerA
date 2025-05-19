#include <iostream>

//using directive
using namespace std; //makes everythign in the standard namespace visible, but, is not the best standard practice,
//Allows us to not use the std::cout


int main() {

    //Lets print a welcome message
    //PLEASE remember to put comments!!!
  
    std::cout << "Hello COP3337!\n";

    //cout = console output
    //endl = new line, equivalent to '\n'
    //<< = stream insertion operator
    //:: = scope resolution operator
    //std - standard namespace
    //namespace, scope recognition operator, stream insertion operator!!

    std::cout << "5/2 is " << 5.0 / 2 << std::endl; // <<endl; to start a new line

    //to make an output float, you can use '5.0' instead of '5'
    // We will be using git commands to submit our code
    
    
    return 0;
}
