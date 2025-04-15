#include <iostream>
#include "head.h"

using namespace std;

int main() {
    auto circle = ShapeFactory::createShape("circle", 5);
    auto square = ShapeFactory::createShape("square", 4);
    auto rectangle = ShapeFactory::createShape("rectangle", 4, 6);

    cout << "Circle area: " << circle->area() << endl;
    cout << "Square area: " << square->area() << endl;
    cout << "Rectangle area: " << rectangle->area() << endl;

    return 0;
}
