#include<iostream>
using namespace std;
class data{
    int a,b,sum;
    public:
    void getdata(){
        cin>>a>>b;
    }
    void getobject(data ob1,data ob2);
    void show(){
        cout<<"Sum is: "<<sum;
    }
};
void data::getobject(data ob1,data ob2){
    cout<<"Value of ob1.a: "<<ob1.a<<"\nValue of ob1.b: "<<ob1.b<<endl;
    cout<<"Value of ob2.a: "<<ob2.a<<"\nValue of ob2.b: "<<ob2.b<<endl;
    sum=ob1.a+ob1.b+ob2.a+ob2.b;
}
int main()
{
    data d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.getobject(d1,d2);
    d3.show();
return 0;
}