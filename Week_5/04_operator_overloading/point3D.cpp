#include "point3D.h"

Point3D::Point3D(int x, int y, int z, const string& tag) : Point(x, y, tag){
    this->z = z;
}

void print(){
    std::cout << tag << std::endl;
    std::cout << x << ", " << y << ", " << z << std::endl;
}