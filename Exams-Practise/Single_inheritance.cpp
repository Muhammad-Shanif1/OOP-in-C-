#include<iostream>
using namespace std;
class Base{
    int p=0;
    public:
    int n;
    protected:
    int pro=8;
};
class Derived:public Base{
    public:
    int l=9;
    void show(){
        n=9;
        cout<<n<<pro;
    }
};
int main()
{
    Derived o;
    o.show();
    cout<<o.l<<o.n;
return 0;
}