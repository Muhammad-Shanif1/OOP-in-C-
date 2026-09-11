#include<iostream>
using namespace std;
class Base{

    public:
    int b=3;
    protected:
    int pro=4;
};
class Derived1:protected Base{

    public:
    int d1=3;
};
class Derived2:protected Base{

    public:
    int d2=4;
};
class SubDerived:public Derived1,public Derived2{

    public:
    void show(){
        cout<<b<<pro<<d1<<d2;
    }
};
int main()
{
    SubDerived obj;
    obj.show();
return 0;
}