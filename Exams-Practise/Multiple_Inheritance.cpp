#include<iostream>
using namespace std;
class Base1{
    public:
    int n1=9;
    void shown1(){
        cout<<n1;
    }
};
class Base2{
    public:
    int n2=8;
    void shown2(){
        cout<<n2;
    }
};
class Derived:public Base1,public Base2{
    public:
    int n3=7;
    int result;
    void shown3(){
        cout<<n3;
    }
    void calculate(){
        result=n1+n2+n3;
    }
};
int main()
{
    Derived o;
    o.calculate();
    cout<<o.result;
return 0;
}