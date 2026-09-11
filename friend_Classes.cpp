#include<iostream>
using namespace std;
//forward Declaration
class data;
class multi{
    public: 
    int Multiply(data);
};
class data{
    int a,b;
    public:
    friend data sum(data,data);      //make function as a friend.
    // Individually declaring functions as friends
    friend int multi :: Multiply(data ob1);
    // Aliter: Declaring the entire calculator class as friend
    // friend class multilpy;
    void setdata(int i,int k){
        a=i;b=k;
    } 
    void printdata(){
        cout<<"\nvalue of a is: "<<a<<"\nvalue of b is: "<<b;
    }
};
int multi :: Multiply(data ob1){
        return (ob1.a*ob1.b);
}
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