#include<iostream>
using namespace std;
class Base {
    // ...
    public:
    virtual ~Base() {} // Define a virtual destructor to make Base polymorphic

};
class Derived : public Base {
    // ...
};

int main()
{
Base* basePtr = new Derived();
Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // Explicit downcasting using dynamic_cast
    
return 0;
}