#include<iostream>
using namespace std;
class Derived;     //Forward Declaration
class Base{
    int sn=8;
    public:
    friend class Derived;
};
class Derived{
    public:
    void show(){
        Base base;
        cout<<base.sn;
    }
};
int main()
{
    Derived s;
    s.show();
return 0;
}
//Syntax
/*

class [class 2nd name];         forward declaration
class [class !st name]{
    friend class [class 2nd name];              you can write everwhere in a class
};
class [class 2nd name]{
    //code
};

*/