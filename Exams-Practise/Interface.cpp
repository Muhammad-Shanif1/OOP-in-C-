#include<iostream>
using namespace std;
class Base{      //Interface
    public:
    virtual void Rule1()=0;
    virtual void Rule2()=0;
    virtual void Rule3()=0;
};
class Derived:public Base{
    public:
    Derived(){
        Rule1();Rule2();Rule3();
    }
    virtual void Rule3(){
        cout<<"Rule1 Called";
    }
    virtual void Rule1(){
        cout<<"Rule2 Called";
    }
    virtual void Rule2(){
        cout<<"Rule3 Called";
    }
};
int main()
{
    Derived obj;
    // Base o;        //Not Allow
return 0;
}
// An interface in C++ is a class that contains only pure virtual functions and no data members. 