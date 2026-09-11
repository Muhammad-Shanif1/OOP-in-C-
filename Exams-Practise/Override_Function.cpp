#include<iostream>
using namespace std;
class Base{

    public:
    virtual void over(){     //virtual indicates that this function is meant to be overridden by derived classes
        cout<<"Hello";
    }
};
class Derived:public Base{

    public:
    void over()override{     //override is optional to write
        cout<<"World";
    }
};
int main()
{
    Derived o;
    o.Base::over();
    o.over();
return 0;
}
//Note:
//      You can also override method by didn't use virtual and override keywords But this is not a good practise.