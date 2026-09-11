#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"base contr called\n";
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"Derived Contr called\n";
    }
};
int main()
{
    derived obj;
return 0;
}
// base class constructor is executed first