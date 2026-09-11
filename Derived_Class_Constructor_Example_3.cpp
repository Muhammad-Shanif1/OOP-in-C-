#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"base Contr called";
    }
};
class derived:public base{
};
int main()
{
    derived obj;
return 0;
}
/* If the base class constructor does not have any arguments,
there is no need for any constructor in the derived class*/ 