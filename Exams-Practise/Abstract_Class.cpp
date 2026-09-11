#include<iostream>
using namespace std;
class Base{    //This is the Abstract class 
    public:
    void virtual show()=0;
    // void show(){                 //shows an error
    //     cout<<"Time is money";
    // }
};
class Derived:public Base{

    public:
    void msg(){
        cout<<"Hellon World";
    }
    void show()override{       //override is optional to write
        cout<<"Time is important";
    }
};
int main()
{
    Derived o;
    o.msg();
    o.show();
    // Base l;      //It is not allow to create the instance of abstract class
    // l.show();
                    //Because pure virtual functions have no implementation in the base class, attempting to create an
                    //  object of such a class would result in an incomplete object that cannot be used.
return 0;
}
//Abstract class is a class that containbcs at least only one pure virtual function