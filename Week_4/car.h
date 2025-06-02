#ifndef CAR_H
#define CAR_H
class CAR {
    public:
    //cinstructor with default values
    Car(std::string make_ = "-", std::string model_ = "-", int year_ = 1900, double MPG_ = 0.0)
    //print model
    void printInfo() const;
    
}
private:
    std::string make;
    std::string make;
    int year;
    double MPG;