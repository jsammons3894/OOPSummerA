#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>
#include "point.h"

class Point3D : public Point {
    public:
    //coinstructor
    Point3D(int x, int y, int z, const std::string& tag);

    void print() const;

    private:
    int z;
};