#include <iostream>
#include <cmath>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual functions
    virtual void draw() = 0;
    virtual double area() = 0;
};

// Circle class inherits Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    void draw() override {
        cout << "Drawing a Circle" << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Rectangle class inherits Shape
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }

    double area() override {
        return length * width;
    }
};

// Main function
int main() {
    // Create array of Shape pointers
    Shape* shapes[2];

    // Create Circle and Rectangle objects
    shapes[0] = new Circle(5.0);        // Circle with radius 5
    shapes[1] = new Rectangle(4.0, 6.0); // Rectangle with length 4 and width 6

    // Loop through and call draw() and area()
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl << endl;
    }

    // Free memory
    delete shapes[0];
    delete shapes[1];

    return 0;
}
