#include<iostream>
#include<cmath>
using namespace std;
class base1{
    int n1;
    public:
    base1(int b1){
        n1=b1;
        cout<<"Base1 class constructor called";
        cout<<"Value of base1 is: "<<n1<<endl;
    }
};
class base2{
    int n2;
    public:
    base2(int b2){
        n2=b2;
        cout<<"Base2 class constructor called";
        cout<<"Value of base2 is: "<<n2<<endl;
    }

};
class derived:public base1,public base2{
    int d1,d2;
    public:
    derived(int a,int b,int c,int d):base2(a),base1(b){
        d1=c;d2=d;
        cout<<"derived class constructor called";
        cout<<"Value of d1 is: "<<d1<<endl;
        cout<<"Value of d2 is: "<<d2<<endl;
    }
};
int main()
{
    derived obj(1,2,3,4);

return 0;
}
//Points:
/* If the base class constructor does not have any arguments,
there is no need for any constructor in the derived class    see in ex3*/
/* But if there are one or more arguments in the base class constructor,
derived class need to pass argument to the base class constructor    see in exp1*/
// base class constructor is executed first    see in exp2 
// The constructors for virtual base classes are invoked before a non-virtual base class    see in exp4
// If there are multiple virtual base classes, they are invoked in the order declared      see in exp6
// Any non-virtual base class are then constructed before the derived class constructor is executed
/* In multiple inheritances, base classes are constructed in the order
in which they appear in the class deceleration at line23    see in this program*/
// In multilevel inheritance, the constructors are executed in the order of inheritance   see in exp5