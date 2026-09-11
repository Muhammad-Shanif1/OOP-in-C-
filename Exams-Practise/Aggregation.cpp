#include<iostream>
using namespace std;
class Employee{
    public:
    Employee(){
        cout<<"I am a aemployee\n";
    }
    ~Employee(){
        cout<<"Employee destroyed\n";
    }
};
class Company{
    public:
    Employee *obj;    //not called employee's contructor bcz Declaring a pointer does not automatically
// create an object or call its constructor. Instead, it only reserves memory to hold the address of an object
    Company(Employee *obj){
        this->obj=obj;
        cout<<"Thi is Company\n";
    }
    ~Company(){
        cout<<"Company Destroyed\n";
    }
};
int main()
{
    Employee *Eobj=new Employee;
    {
    Company Cobj(Eobj);
    }
    delete Eobj;     
return 0;
}
//Syntax
/*
Class PartClass{
//instance variables
//instance methods
}
class Whole{
PartClass* partclass;
}
*/

//"Has-a" relationship
//Represents a weak relationship of association
//Parent object has or contains the child object
//When parent object deletes child object doesn't delete.  