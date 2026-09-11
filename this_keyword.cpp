#include<iostream>
using namespace std;
class data{
    int id,no;
    public:
    data & setdata(int id){
        //"this" is the pointer to the current object.
        this->id=id;
        return *this;
    }
    data & setnumber(int no){
        this->no=no;   //"this" invokes object's member.
        // Return the current object using "this"
        return *this;

    }
    void showdata(){
        cout<<"id is: "<<id<<endl;
        cout<<"No is: "<<no<<endl;
    }
};
int main()
{
    data obj;
    obj.setdata(5);
    obj.setdata(6);
    obj.setnumber(7).setdata(5).showdata();
return 0;
}
//this keyword is a pointer that points to the object for which a member function is invoked. 
//in C++,Local variable has much priority.