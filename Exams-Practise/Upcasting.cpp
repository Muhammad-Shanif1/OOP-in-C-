#include<iostream>
using namespace std;
class Base{
    public:
    int var_base=0;
    void showBase(){
        cout<<"Base called";
    }
};
class Derived:public Base{
    public:
    int var_derive=9;
    void showDerive(){
        cout<<"Dericed called";
    }
};
int main()
{
    Derived Dobj;

    Base *Bptr=&Dobj;
    Bptr->showBase();
    // Bptr->showDerive();         //not allow upcasting doesn't mean that base ptr canaccess derived members 
                                   //it means that derived class is treated as base class with base pointer
    
return 0;
}
//Always allowed for public inheritance