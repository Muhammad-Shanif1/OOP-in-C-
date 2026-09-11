#include<iostream>
using namespace std;
class base{
    int no;
    public:
    base(int no){
        this->no=no;
    }
    base & dis(){
        cout<<"the value of no is: "<<no<<endl;
        cout<<"the address of object is: "<<this<<endl;
        return *this;
    }
    void dis1(){
          cout<<"the value of no is: "<<no<<endl;
        cout<<"the address of object is: "<<this<<endl;
    }
    base & setdata(int a){
        no=a;
        return *this;
    }
};
int main()
{
    base ob(5);
    ob.dis();
    // base ob1=ob.setdata(3);
    // ob1.dis();
    ob.setdata(4).dis().dis1();
    // ob.dis().setdata(7);    //we error because referece of object cantnot be pass back 
   return 0;
}