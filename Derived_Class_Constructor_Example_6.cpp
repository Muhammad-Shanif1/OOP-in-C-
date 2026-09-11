#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base Contr called\n";
    }
};
class derived:public virtual base{
    public:
    derived(){
    cout<<"Derived class Constr called\n";
    }
};
class derived2:public derived{
    public:
    derived2(){
        cout<<"derived2 Contr called\n";
    }
};
int main()
{
    derived2 obj;
return 0;
}
// If there are multiple virtual base classes, they are invoked in the order declared