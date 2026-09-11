A static variable is a variable that is shared among all instances of a class, rather than having a separate copy for each instance
#include<iostream>
using namespace std;
class data{
    private: 
    int id;
    static int count;    //by default static member starts from 0.
    // static int count=10;     //can't initialize at here,it can be initialize in outside the class body or in static method
    public:
    void get_id(){cin>>id;}
    void show_id(){cout<<id<<endl;}
    static void show_count(){ //static method deals only static members not others and
                              //you can't define it in outside the class body.
        // id++;  //static method doesn't deal non-static members.
        // count=10;
        count++;
        cout<<count;
    }
};
int data::count;      //for static member, it must be declare in outside the class body
// int data::count=10;    //you can initialize  static member at here.
int main(){
    data st1;
    st1.get_id();
    st1.show_id();
    st1.show_count();
    return 0;
}