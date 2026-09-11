#include<iostream>
using namespace std;
class data{
    public:
    data(int n1,int n2){
        int multiply=n1*n2;
        cout<<"Multiply of two numbers is: "<<multiply<<endl;
    }
    data(int,int,int);
};
data::data(int a,int b,int c){
    int sum=a+b+c;
    cout<<"Sum of three numbers is: "<<sum<<endl;
}   
int main(){
    int n1,n2,n3;
    cout<<"Enter numbers: ";
    cin>>n1>>n2>>n3;
    data sum(n1,n2,n3);
    data multiply(n1,n2);
    return 0;
}