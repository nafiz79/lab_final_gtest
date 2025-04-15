#pragma once
#include <memory>
#include <string>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r);
    double area() const override;
};

class Square : public Shape {
    double side;
public:
    Square(double s);
    double area() const override;
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h);
    double area() const override;
};

class ShapeFactory {
public:
    static unique_ptr<Shape> createShape(const string& type, double a, double b = 0.0);
};

