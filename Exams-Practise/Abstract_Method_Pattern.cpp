#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (abstract method)
    virtual void draw() const = 0;
};

// Concrete subclass implementing the abstract method
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};

// Concrete subclass implementing the abstract method
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    // Attempting to create an object of the abstract class (error)
    // Shape shape;  // Error: cannot instantiate abstract class

    // Creating objects of concrete subclasses
    Circle circle;
    Rectangle rectangle;

    // Calling the draw method of each object
    circle.draw();     // Output: Drawing a circle
    rectangle.draw();  // Output: Drawing a rectangle

    return 0;
}

//What is Abstract Method?
//Similar like factory method patter but factory Method pattern belong to one family, while 
// Abstract Factory pattern deals with multiple families of products
//For example Reactangle and circle belongs to different families