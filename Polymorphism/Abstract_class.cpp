#include<iostream>
using namespace std;
class base{    //Abstract class is a class which has atleast one pure virtual function
    public:
    int var_base=9;
    void show(){
        cout<<"var_base is: "<<var_base<<endl;
    }
    virtual void Message()=0;    //do-nothing function --> pure function
};
class derived:public base{
    public:
    int var_derived=7;
    void show(){
        cout<<"var_base is: "<<var_derived<<endl;
    }
    //Pure function must be defined in derived class.
    void Message()override{ 
        cout<<"Pure function"<<endl;
    }
};
int main()
{
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->show();
    ptr->Message();
return 0;
}