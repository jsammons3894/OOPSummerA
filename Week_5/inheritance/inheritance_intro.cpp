#include <iostream>
#include <string>

class Human {
    private:
        std::string name;

    public:
    //human constructor
    Human() {
        std::cout << "The constructor for human was called:" << std::endl;
    }
    Human (const std::string& name){
        setName(name);
    }
    ~Human() {
        std::cout << "The destructor for human was called:" << std::endl;
    }
        std::string getName () {
            return name;
        }
        void setName(const std::string& name){
            this->name = name;
        }
        void printInfo() const {
            std::cout << "Hi! My name is " << name << std::endl;
        }
};

class Student : public Human {
    public:
    Student() {
    std::cout << "The constructor for student was called" << std::endl;
        id = 0;
    }
    Student(const std::string& name, int id) : Human(name){
        //we cant call a parent class constructor without ^^
        //call the base class constructor!
        this->id = id;
    }
    void study(std::string subject){
        std::cout << "I am studying " << subject << std::endl;
    }
    void printInfo() const {
            Human::printInfo(); //calling the method from the base class
            std::cout << "My student id is " << id << std::endl;
        }

    ~Student() {
    std::cout << "The destructor for student was called" << std::endl;
        id = 0;
    }
        int id;
};

class GraduateStudent : public Student {
    public:
        std::string degree;

        //redefine base class method!
        void study(const std::string& subject) {
            std::cout << "I already know " << subject << std::endl;
            std::cout << "Give me a job!" << std::endl;
        }
};

int main () {
    Human homosapiens;
    homosapiens.setName("Kushim");
    std::cout << homosapiens.getName() << std::endl;

    Student mark;
    mark.setName("Mark");
    mark.id = 111;
    std::cout << mark.getName() << std::endl;
    std::cout << mark.id << std::endl;

    Student john;
    john.setName("John");
    john.id = 1234;
    std::cout << john.getName() << std::endl;
    std::cout << john.id << std::endl;
    john.study("OOP");

    GraduateStudent ethan;
    ethan.setName("Ethan");
    ethan.id = 2345;
    std::cout << ethan.getName() << std::endl;
    std::cout << ethan.id << std::endl;
    ethan.study("Physics");

    john.printInfo();
    homosapiens.printInfo();

return 0;
}