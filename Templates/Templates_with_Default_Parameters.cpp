#include<iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=string>
class myClass{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    void setdata(T1 d1,T2 d2,T3 d3){
        data1=d1;data2=d2;data3=d3;
    }
    void show(){
        cout<<data1<<endl<<data2<<endl<<data3<<endl;
    }
};
int main()
{
    myClass<>obj;
    // obj.setdata("hello",3,4.5);   throw an error
    obj.setdata(4,4.5,"shanif");
    obj.show();
    myClass <string,float,int>obj2;
    obj2.setdata("My gpa is ",3.5,2);
    obj2.show();
    myClass<string,int,float>obj3;
    // obj3.setdata(4,"hello",5.5);    throw an error
    obj3.show();
return 0;
}