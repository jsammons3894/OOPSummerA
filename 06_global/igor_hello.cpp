#include <iostream>
#include <string>
class Hello {
public:
    static int numberOfObjects;

    Hello() : messages(nullptr), size(0) {
    std::cout << "Hi!" << std::endl;
    numberOfObjects++;
    }
    Hello(int n) : size(n) {
// int i = 0;
// while (i < n) {
// std::cout << "Hi!" << std::endl;
// i++;
// }
// Dynamically allocate an array of strings
    messages = new std::string[n];

// Initialize the array
    for(int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            messages[i] = "Hi!";
        }
    else if (i % 3 == 1) {
        messages[i] = "Hello!";
    }
    else {
        messages[i] = "Welcome!";
    }
    }
    numberOfObjects++;
}

//Copy constructor

Hello(const Hello& other){
    std::cout << "The copy constructor was called" <<std::endl;
    size = size.other;

}

//Destructor
~Hello() {
    //When the object should be destroyed
    std::cout << "The Destructor was called." << std::endl;
    delete [] messages;
    numberOfObjects--;
}

// Method
void bye() const {
std::cout << "Bye!" << std::endl;
}

void printGreetings() const {
for (int i = 0; i < size; i++) {
std::cout << messages[i] << std::endl;
}
}


private:
std::string* messages; // array of greetings
int size;
};

void test(){
    Hello h(999999);
}

void test2(Hello h){

}

//initalize the static variable
int Hello::numberOfObjects = 0;

int main() {
// Create an object of Hello class dynamically
Hello* hi = new Hello;
// Access bye method
(*hi).bye();
Hello* hi2 = new Hello(10);
// Access bye method (arrow operator)
hi2->bye();
// Print greetings
hi2->printGreetings();

delete hi;
delete hi2;
for (int i = 0; i < 10; i++) {
//Hello hello(999999999);
test();
Hello h;
test2(h);
}

//print the numebr of objects


std::cout << Hello::numberOfObjects << std::endl;
// Deallocate dynamic memory


//call a copy constructore
Hello hi;
Hello h2(hi);

return 0;
}