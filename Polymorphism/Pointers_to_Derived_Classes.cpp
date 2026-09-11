                                // Run Time Polymorphism
#include<iostream>
using namespace std;
class base{
    public:
    int var_base;
    void show(){
        cout<<"var_base is: "<<var_base<<endl;
    }
};
class derived:public base{
    public:
    int var_derived;
    void show(){
        cout<<"var_derived is: "<<var_derived<<endl;
    }
};
int main()
{
    //Create objects
    base base_obj;
    derived derived_obj;

    //Create pointers 
    base *base_ptr;
    derived *derived_ptr;

    //Working on base_ptr
    base_ptr=&derived_obj;   /*Pointing base class pointer to derived class object and
    it is called upcasting*/
    base_ptr->var_base=5;
    base_ptr->show();
    // base_ptr->var_derived=0;
/*  base_ptr->var_derived=9;        Will throw an error bcz it can only invokes its own 
datatype(in this case base class)'s members and methods*/

    //Working on derived_ptr
/*  derived_ptr=&base_obj; Pointing derived class to base class object  is not allowed
 according to the principle of polymorphism*/
    derived_ptr=&derived_obj;
    derived_ptr->var_derived=6;
    derived_ptr->var_base=7;
    base_ptr->show();
    derived_ptr->show();     //override
return 0;
}