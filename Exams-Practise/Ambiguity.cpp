#include<iostream>
using namespace std;
class Base1{
    public:
    void msg(){
        cout<<"Base1 Called";
    }
};
class Base2{
    public:
    void msg(){
        cout<<"Base2 Called";
    }
};
class Derive:public Base1,public Base2{

    public:
    void call(){
        Base1::msg();
    }
};
int main()
{
    
return 0;
}