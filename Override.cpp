#include<iostream>
using namespace std;
class base{
    public:
    void say(){
        cout<<"Hello Base"<<endl;
    }
};
class derived:public base{
    public:
    // derived's new say() method will override base class's say() method.

    void say(){
        cout<<"Hello derived class"<<endl;
    }
};
int main()
{
    derived obj;
    obj.say();
return 0;
}