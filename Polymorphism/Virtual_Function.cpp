                            // Run Time Polymorphism
#include<iostream>
using namespace std;
class base{
    public:
    int var_base=9;
    virtual void show(){
        cout<<"var_base is: "<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived=9;
    void show(){
        cout<<"var_derived is: "<<var_derived<<endl;
    }
};
int main()
{
  base bobj;
  derived dobj;
  base *bptr;
  derived *dptr;
  bptr=&dobj;   //points base pointer to derived obj.
  bptr->show();
return 0;
}
/*"virtual" keyword when used with method it means that this method will not invoked when 
its own's datatype pointer points to its derived class object and this method is called 
vittual function*/

/*Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class can be empty.
Virtual function runs when there is no function in derived class */