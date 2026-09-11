#include<iostream>
using namespace std;
class data{
    int data1;
    public:
    int data2;
    void setdata(){
        data1=10;
        data2=20;
    }
    int getdata1(){
        return data1;
    }
    int getdata2(){
        return data2;
    }
};
class derived:data{   //data is received as a private from base class.
    int data3;
    public:
    void process(){
        setdata();    //it is inherited as a private so we can't access by directly but we can accscc as it. 
        data3=data2*getdata1();
    }
    void display(){
        cout<<"Value of data 1 is : "<<getdata1();
        cout<<"Value of data 2 is : "<<getdata2();
        cout<<"Value of data 3 is : "<<data3;
    }
};
int main()
{
    derived ob1;
    ob1.process();
    ob1.display();
    // ob1.getdata1();    we can't access bcz derived class is private inherited of base class
return 0;
}