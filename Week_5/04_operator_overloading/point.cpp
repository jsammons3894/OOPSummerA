
Page
1
of 2
#include "Point.h"
#include <string>
#include <cstring>
#include <iostream>
Point::Point(int x, int y, const std::string& tag) {
this->x = x;
this->y = y;
this->tag = new char[tag.size() + 1];
// Copy the characters from the string
int i;
for (i = 0; i < tag.size(); i++) {
this->tag[i] = tag[i];
}
this->tag[i] = '\0';
}
Point::~Point() {
delete [] tag;
}
Point::Point(const Point& other) {
x = other.x;
y = other.y;
int size = strlen(other.tag);
tag = new char[size + 1];
for (int i = 0; i < size; i++) {
tag[i] = other.tag[i];
}
tag[size] = '\0';
}
std::string Point::toString() const {
return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
void Point::print() const {
std::cout << tag << std::endl;
std::cout << toString() << std::endl;
}
bool Point::operator==(const Point& other) {
return (x == other.x && y == other.y);
}
bool Point::operator!=(const Point& other) {
//return (x != other.x || y != other.y);
//OR
//return !(x == other.x && y == other.y);
// OR
return !(*this == other);
}
int& Point::operator[](int index) {
if (index == 0) {
return x;
}
else {
return y;
}
}
Point Point::operator+(const Point& other) {
// int m = x + other.x;
// int n = y + other.y;
return Point(x + other.x, y + other.y);
}
Point Point::operator+=(const Point& other) {
// Update the current object
*this = *this + other;
return *this;
}
Point Point::operator++() {
x++;
y++;
return *this;
}
Point Point::operator++(int ) {
Point temp(x, y);
x++;
y++;
return temp;
}
Point& Point::operator=(const Point& other) {
delete [] tag;
x = other.x;
y = other.y;
int size = strlen(other.tag);
tag = new char[size + 1];
for (int i = 0; i < size; i++) {
tag[i] = other.tag[i];
}
tag[size] = '\0';
return *this;
}
