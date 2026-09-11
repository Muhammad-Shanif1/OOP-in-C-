#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"rello";
    }
};
class Temp{
    public:
    int d=3;
    base p;
    void msg(){
        cout<<"hello";
    }
};
int main()
{
    cout<<Temp().d;
    Temp().msg();
    Temp().p.show();
return 0;
}