#include <iostream>
using namespace std;

class MyClass {
private:
    // Private constructor
    MyClass(int x) {
        cout << "Parameterized constructor called with value: " << x << endl;
    }

public:
    // Public static method to create instances
    static MyClass createInstance(int x) {
        return MyClass(x);
    }
};

int main() {
    // Attempting to create an instance directly will result in a compilation error
    // MyClass obj(10); // Compilation error: constructor is private
    
    // Creating an instance using the static method
    MyClass obj = MyClass::createInstance(10);

    return 0;
}
