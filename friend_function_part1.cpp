#include<iostream>
using namespace std;
class data{
    int a,b;
    public:
    friend data sum(data ob1,data ob2);      //make function as a friend.
    void setdata(int i,int k){
        a=i;b=k;
    } 
    void printdata(){
        cout<<"\nvalue of a is: "<<a<<"\nvalue of b is: "<<b;
    }
};
data sum(data ob1,data ob2){    //its a function not of class method. 
    data ob3;
    ob3.setdata((ob1.a+ob2.a),(ob1.b+ob2.b));
    return ob3;
}
int main()
{
    data c1,c2,result;
    c1.setdata(1,2);
    c1.printdata();
    c2.setdata(3,3);
    c2.printdata();
    result=sum(c1,c2);
    result.printdata();
return 0;
}
/* Properties of Friend Function
Not in the scope of the class
Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
A friend function can be invoked without the help of any object
Usually contain objects as arguments
Can be declared under the public or private access modifier, it will not make any difference
// It cannot access the members directly by their names, it needs (object_name.member_name) to access any member*/