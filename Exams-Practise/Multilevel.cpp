#include<iostream>
using namespace std;
class Base{

    public:
    int b=9;
    protected:
    int pro=3;
};
class Derived:protected Base{

    public:
    int d=3;
};
class SubDerived:public Derived{

    public:
    int sd=4;
    void show(){
        cout<<b<<pro;
    }
};
int main()
{
    SubDerived o;
    o.show();
return 0;
}