#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base Contr called\n";
    }
};
class derived:public base{
    public:
    derived(){
    cout<<"Derived class Constr called\n";
    }
};
class derived2:public derived{
    public:
    derived2(){
    cout<<"Derived2 class Constr called\n";
    }
};
int main()
{
    derived2 obj;
return 0;
}
// In multilevel inheritance, the constructors are executed in the order of inheritance