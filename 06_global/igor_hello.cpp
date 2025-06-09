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
Hello(const Hello& other) {
std::cout << "The copy constructor was called" << std::endl;
size = other.size;
messages = new std::string[size];
//copy the values
for (int i = 0; i < size; i++) {
messages[i] = other.messages[i];
}
numberOfObjects++;
}
// Destructor
~Hello() {
// std::cout << "The destructor was called" << std::endl;
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
void test() {
// std::cout << "The function starts" << std::endl;
Hello h(999999);
// std::cout << "The function ends" << std::endl;
}
void test2(Hello h) {
}
// Initialize the static data member of the class
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
// Print the number of objects
std::cout << Hello::numberOfObjects << std::endl;
// Deallocate dynamic memory
delete hi;
delete hi2;
for (int i = 0; i < 10; i++) {
// Hello hello(999999999);
test();
Hello h;
test2(h);
}
std::cout << Hello::numberOfObjects << std::endl;
// Call a copy constructor
Hello h1;
Hello h2(h1);
return 0;
}