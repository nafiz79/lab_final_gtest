#include "head.h"
#include <cmath>

using namespace std;


Circle::Circle(double r) : radius(r) {}
double Circle::area() const {
    return M_PI * radius * radius;
}


Square::Square(double s) : side(s) {}
double Square::area() const {
    return side * side;
}


Rectangle::Rectangle(double w, double h) : width(w), height(h) {}
double Rectangle::area() const {
    return width * height;
}


unique_ptr<Shape> ShapeFactory::createShape(const string& type, double a, double b) {
    if (type == "circle") {
        return make_unique<Circle>(a);
    } else if (type == "square") {
        return make_unique<Square>(a);
    } else if (type == "rectangle") {
        return make_unique<Rectangle>(a, b);
    }
    return nullptr;

    
}

