#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.1415926535 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    Shape* shape1 = new Circle(3.0);
    Shape* shape2 = new Rectangle(5.0, 4.0);

    cout << "Area of circle = " << shape1->area() << endl;
    cout << "Area of rectangle = " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
