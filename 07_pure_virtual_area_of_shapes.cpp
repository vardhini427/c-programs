// Pure virtual function and abstract class: area of different shapes
#include <iostream>
using namespace std;

class Shape {                       // abstract class
public:
    virtual double area() = 0;      // pure virtual function
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) { r = radius; }
    double area() { return 3.14159 * r * r; }
};

class Rectangle : public Shape {
    double l, b;
public:
    Rectangle(double length, double breadth) { l = length; b = breadth; }
    double area() { return l * b; }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double bs, double h) { base = bs; height = h; }
    double area() { return 0.5 * base * height; }
};

int main() {
    Shape *s[3];
    s[0] = new Circle(5);
    s[1] = new Rectangle(4, 6);
    s[2] = new Triangle(3, 8);

    cout << "Area of circle    = " << s[0]->area() << endl;
    cout << "Area of rectangle = " << s[1]->area() << endl;
    cout << "Area of triangle  = " << s[2]->area() << endl;

    for (int i = 0; i < 3; i++)
        delete s[i];
    return 0;
}
