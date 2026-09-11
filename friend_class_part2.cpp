#include<iostream>
using namespace std;
//Forward declaration
class data;      
class data1{      //it must be above the friended class when we want to access its specific method
    public: 
    void display(data obj);     //must be only declaration not definition
};
class data{
    private:
    string name;
    int id;
    int no=9;
    public:
    friend void data1::display(data obj);
    // friend class data1;
    friend void showdata(data ob1);
    int grade=9;
   void getdata(string name1,int id1){
    name=name1;id=id1;
    name=name+" student";
    id=id+100;
}
};
void showdata(data ob1){
    cout<<ob1.name<<endl<<ob1.grade<<endl<<ob1.id;
}
void data1:: display(data obj){
        cout<<obj.no;
    }
int main()
{
    data ob;
    ob.getdata("talha",54);
    showdata(ob);
return 0;
}