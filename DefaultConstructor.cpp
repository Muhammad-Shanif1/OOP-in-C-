#include<iostream>
using namespace std;
class data{
    int a=0,b=0;
    public:
    void getdata(){    
    cout<<"Given numbers a and b + 10 are : "<<endl;
    cout<<a<<endl<<b;
    }
    data(void);    //Deafult Constructor    //it runs first and then getdata method will run.
};
data::data(void){    //Default Constructor takes no parameters.
    int x,y;
    cout<<"Enter numbers: ";
    cin>>x>>y;
    a=x+10;b=y+10;
}
int main(){
    data n1;
    n1.getdata();
    return 0;
}
// Properties: 
// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address