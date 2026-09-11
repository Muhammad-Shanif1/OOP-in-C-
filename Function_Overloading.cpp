#include<iostream>
using namespace std;
class data{
    public: 
    void getdata(int a,int b,string c){
        cout<<"String"<<endl;
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void getdata(int x,int y,int z){
        cout<<x<<endl<<y<<endl<<z<<endl;
    }
};
int main()
{
    int n1,n2,n3;
    string n="Hello";
    cout<<"Enter data: ";
    cin>>n1>>n2>>n3;
    data d1;
    d1.getdata(n1,n2,n3);      //it calls getdata(int x,int y,int z)
    d1.getdata(n1,n2,n);       //it calls getdata(int a,int b,string c)
return 0;
}