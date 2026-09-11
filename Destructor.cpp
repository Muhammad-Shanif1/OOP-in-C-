#include<iostream>
using namespace std;
class data{
    public:
    data(){
        cout<<"Default constructor has been called.\n";
    }
    ~data(){   //Destructor called when object destroyed.       //~ (tilde)
        cout<<"Destructor has been called.\n";
    }
    void show(){
        cout<<"Hello";
    }
    // It is not possible to define more than one destructor
};
int main()
{
    data n1,n2;   //these objects destroyed when program ends.
    {
        data n3;   //this object destroyed within paranthesis bcz object destroyed
                //when program goes outside the parathesis.
    }
    // n3.show();    //it doesn't run bcz of its scope covers only  paranthesis.
    cout<<"\nn3 object has been destroyed\n";
    cout<<"\nn1 and n2 objects are being destroyed\n";
return 0;
}