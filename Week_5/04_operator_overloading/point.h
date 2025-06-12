#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>
class Point {
    public:

    //constructor with default values
    Point (int x = 0, int y = 0);

    //destructor
    ~Point();

    //copy constructor

    Point(const Point& other);

    std::string toString() const;

    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    //Operator brackets []

    int& operator[](int index);

    //Arethemetic operators
    Point operator+(const Point& other);

    Point operator*(const Point& other);

    //Arethemetic assignment operator

    Point operator+=(const Point& other);


    //preincrement
    Point operator++();

    //postincrement
    Point operator++(int );


    Point operator--();
    Point operator--(int );
    Point operator*=(const Point& other);


    private:
        int x, y;
};

#endif