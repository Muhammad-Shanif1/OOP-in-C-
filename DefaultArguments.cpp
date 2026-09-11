#include<iostream>
using namespace std;
class data{
    public:
    data(int a,int b=0){
        int c=a+b;
        cout<<"Sum is : "<<c<<endl;
    }
};
int main()
{
    data d1(4,3);
    data d2(5);
return 0;
}