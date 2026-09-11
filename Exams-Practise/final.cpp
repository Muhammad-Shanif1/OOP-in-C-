#include<iostream>
using namespace std;
class Base final{};      //means it can not be inherited by another
// class Derived:public Base{};      //error
class Derived1{
    public:
    virtual void msg()final{         //measn it can not be override by any derived class
        cout<<"Hello";
    }
    virtual void show(){
        cout<<"Hello";
    }
};
class Derived2:public Derived1{
    public:
    void show()override final{   //means cannot be further overridden by subsequent derived classes.
        cout<<"World";
    }
};
int main()
{
return 0;
}