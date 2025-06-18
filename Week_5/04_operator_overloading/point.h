#ifndef POINT_H
#define POINT_H
#include <string>
#include "point3D.h"
class Point {
public:
// Constructor with default values
Point (int x = 0, int y = 0, const std::string& tag = "");
// Destructor
~Point();
// Copy constructor
Point(const Point& other);
std::string toString() const;
void print() const;

    // Relational Operators
    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    // Operator []
    int& operator[](int index);

    // Arithmetic Operators
    Point operator+(const Point& other);

    // Arithmetic Assignment Operators
    Point operator+=(const Point& other);

    // Preincrement
    Point operator++();

    // Postincrement
    Point operator++(int );

    // Assignment Operator
    Point& operator=(const Point& other);

    //define a friend class, can acess alll private  of current class!!
   

    protected: //avaliable to class member and all derived classes
    int x, y;
    char* tag;
};
#endif
