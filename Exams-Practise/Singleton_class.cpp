#include <iostream>

class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }

private:
    Singleton() {} // Private constructor to prevent instantiation
};

int main() {
    Singleton& singleton = Singleton::getInstance();
    singleton.showMessage();
    return 0;
}
