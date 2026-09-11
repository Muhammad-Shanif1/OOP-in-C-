#include<iostream>
using namespace std;
class data{
    int a,b;
    friend int add(data ob);
    friend int moreadd(data ob);
    public:
    void setdata(int o,int u){
        a=o;b=u;
    }
};
int add(data ob){
    return (ob.a+ob.b);
}
int moreadd(data ob){
    return (ob.a+ob.b+10);
}
int main()
{
    data ob1;
    ob1.setdata(2,2);
    cout<<add(ob1)<<endl;
    cout<<moreadd(ob1);
return 0;
}