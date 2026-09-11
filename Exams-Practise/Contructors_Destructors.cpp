#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Default constructor called";
    }
    base(int n){
        cout<<n;
    }
    base(base &obj){
        cout<<"Copy Constructor Called";
    }
    ~base(){
        cout<<"Destrctor called";
    }
};
int main()
{
    base obj,d(7),m=d;
    base *ptr=new base(3);
    delete ptr;    //destructor called at here of ptr

return 0;
}