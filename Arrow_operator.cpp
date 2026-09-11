#include<iostream>
using namespace std;
class base{
    int n1,n2;
    public:
    void setdata(int a,int b){
        n1=a;n2=b;
    }
    void showdata(){
        cout<<n1<<endl;
        cout<<n2<<endl;
    }
};
int main()
{
    base obj;
    // base *ptr=&obj;
    base *ptr=new base;    //it creates an object of base class to *ptr.
    ptr->setdata(4,5);      //same like that (*ptr).setdata(4,5);
    ptr->showdata();    //Arrow operator only used for pointers.
return 0;
}