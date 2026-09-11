#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base Contr called\n";
    }
};
class derived:public virtual base{
    public:
    derived(){
    cout<<"Derived class Constr called\n";
    }
};
int main()
{
    derived obj;
return 0;
}
// The constructors for virtual base classes are invoked before a non-virtual base class