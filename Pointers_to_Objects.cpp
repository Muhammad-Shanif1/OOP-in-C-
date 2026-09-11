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
    (*ptr).setdata(1,2);    //brackets are important
    (*ptr).showdata();
    base oo[2];
    oo[0].setdata(4,5);
    oo[0].showdata();  
    oo[1].setdata(6,7);
    oo[1].showdata();
return 0;
}