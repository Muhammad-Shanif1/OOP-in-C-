#include<iostream>
using namespace std;
class data{
    protected:
    int i=3;
    public:
    void getdata(){
        cout<<"getdata has been called"<<endl;
    }
};
class data1:public data{
    public:
    void callfx(){
        cout<<"callfx has been called"<<endl;
        getdata();
    }
};
class data3:data1{
    public:
    void sample(){
        cout<<"sample has been called"<<endl;
        cout<<"value of i is "<<i<<endl;
        callfx();
    }
};
int main()
{
    data3 ob;
    ob.sample();
    
return 0;
}