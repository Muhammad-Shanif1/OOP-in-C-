#include <iostream>
using namespace std;

// Interface definition
class Printable {
public:
    virtual void print() const = 0; // Pure virtual function
};

// Concrete class implementing the interface
class Book : public Printable {
private:
    string title;
public:
    Book(const string& t) : title(t) {}

    // Implementation of the print method
    void print() const override {
        cout << "Book: " << title << endl;
    }
};

// Concrete class implementing the interface
class Magazine : public Printable {
private:
    string name;
public:
    Magazine(const string& n) : name(n) {}

    // Implementation of the print method
    void print() const override {
        cout << "Magazine: " << name << endl;
    }
};

int main() {
    // Polymorphic behavior using interface
    Printable* item1 = new Book("The Catcher in the Rye");
    Printable* item2 = new Magazine("National Geographic");

    item1->print(); // Output: Book: The Catcher in the Rye
    item2->print(); // Output: Magazine: National Geographic

    delete item1;
    delete item2;

    return 0;
}
//What is Factory Method?
//A factory method is a creational design pattern that provides an interface for creating objects but 
// allows subclasses to modify the type of objects that will be created.
