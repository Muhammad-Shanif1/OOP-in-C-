#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display" << endl;
    }

    void derivedSpecificFunction() {
        cout << "This is a function specific to the Derived class" << endl;
    }
};

int main() {
    Base *basePtr = new Derived(); // Upcasting: Base class pointer pointing to a Derived class object

    // Attempting to call derivedSpecificFunction using the base class pointer will result in a compile-time error
    // basePtr->derivedSpecificFunction(); // Compile-time error: 'class Base' has no member named 'derivedSpecificFunction'

    // Downcasting: Converting base class pointer to derived class pointer
    Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);
    if (derivedPtr) {
        // Now we can call derivedSpecificFunction because derivedPtr is actually pointing to a Derived object
        derivedPtr->derivedSpecificFunction(); // This is a function specific to the Derived class
    }

    delete basePtr;
    return 0;
}
// for downcasting, upcasting is must