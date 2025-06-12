#include "point.h"
#include <string>
#include <cstring>
//implement constructor

Point::Point(int x, int y, const std::string& tag) {
    this->x = x;
    this->y = y;
    this->tag = new char[tag.size() + 1];
    //copy the characters from the string
    int i;
    for (int i = 0; i < tag.size(); i++){
        this->tag[i] = tag[i];
    }
    this ->tag[i] = '\0';
}

Point::~Point() {
    delete [] tag;
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    tag = new char [strlen(other.tag)];
    tag = new char[size+1];
    for (int i = 0; i < size; i++) {
        tag [i] = other.tag[i];
    }
    tag[size] = '\0';
}

std::string Point::toString() const{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

 bool Point::operator==(const Point& other){
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other){
    //return (x != other.x || y != other.y);
    //OR
   // return !(x == other.x && y == other.y);
   //OR
   return !(*this == other);
}

int& Point::operator[](int index){
    if (index == 0) {
        return x;
    }
    else {
        return y;
    }
}
 
Point Point::operator+(const Point& other) {
    //int m = x + other.x;
    //int n = y + other.y;
    //OR
    return Point(x + other.x, y + other.y); 
}

Point Point::operator+=(const Point& other) {
    this->x += other.x;  // Add the x-coordinates
    this->y += other.y;  // Add the y-coordinates
    return *this;       // Return a reference to the modified object
}


Point Point::operator++(){
    x++;
    y++;

    return *this; //return the current thing
}

Point Point::operator++(int ){ 
    Point temp(x, y);
    x++;
    y++;
    return temp;
}

Point Point::operator*(const Point& other) {
    int m = x * other.x;
    int n = y * other.y;
    return Point(m, n);
}

Point Point::operator--() {
x--;
y--;
return *this;
}

Point Point::operator--(int ){
Point temp (x, y);
x--;
y--;
return temp;
}

Point Point::operator*=(const Point& other){
 int m = x * other.y;
 int n = y * other.x;
 return Point(m,n);
}

