#include<iostream>
using namespace std;
    // base class
class sample{
    public:
    int id=9;
    void show(){
        cout<<id<<endl;
    }
};
// display is derived class of sample class and base class for display1 
class display:public sample{
    public:
    void setdata(){
        id=5;
        show();
    }
};
// note:
// visibilitiy mode is private by default.
//private visibilitiy mode means base class public members becomes private member of derived class
// public visibilitiy mode means base class public members becomes public member of derived class  
//private members can not be inherited
// display1 is derived class of display class
class display1:public display{
    public:
    void setdata1(){
        setdata();
        show();
    }
};
int main()
{
    sample s1;
    s1.show();
    display s2;
    s2.setdata();
    // s2.show();
    display1 s3;
    s3.setdata1();
return 0;
}