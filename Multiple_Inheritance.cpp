#include<iostream>
using namespace std;
class base1{
    protected:
    int y=9;
    public:
    void diplay_base1(){
        cout<<"Hello base1\n";
    }
};
class base2{
    protected:
    int g=4;
    public:
    void display_base2(){
        cout<<"Hello base2\n";
    }
};
class derived:protected base1,protected base2{
    public:
    void display_derived(){
        cout<<g<<y;
    }
};
int main()
{
    derived ob;
    ob.display_derived();
    // cout<<ob.y;       not called bcz it is protected
return 0;
}