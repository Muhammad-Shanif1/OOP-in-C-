#include <iostream>
using namespace std;

// Concrete class
class Car {
private:
    string make;
    string model;
    int year;
public:
    // Constructor
    Car(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    // Member function to display car details
    void display() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Creating objects of the concrete class
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Honda", "Civic", 2019);

    // Calling member function of the concrete class
    car1.display();
    car2.display();

    return 0;
}
//what is Concrete Class?
// A class which provides complete implementation for all its member functions and can be instantiated to create objects.
//Concrete classes serve as blueprints for creating objects with specific properties and behaviors