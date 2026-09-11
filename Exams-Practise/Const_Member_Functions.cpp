#include<iostream>
using namespace std;
class s{
    public:
    int n=8;
    void set()const{
        // n=7;      //error
        cout<<n;
    }
    void show(){
        n=5;
        cout<<n;
    }
};
int main()
{
    s obj;
    obj.set();
    cout<<endl;
    obj.show();
return 0;
}
// Const member functions are used to specify that a particular member function of a class does not modify the state of the object.
// They allow you to define operations that can be safely performed on const objects of the class.