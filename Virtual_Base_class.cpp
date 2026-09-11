#include<iostream>
using namespace std;
class Student{
    protected:
    int total,computer,math;
    string name,grade;
    public:
    void set_name(string n,string g){
        name=n;grade=g;
    }
    void show_data(){
        cout<<"Name is : "<<name<<endl;
        cout<<"Grade is: "<<grade<<endl;
    }
};
class Math:public virtual Student{
    protected:
    public:
    void set_math(int m){
        math=m;
    }

};
class Computer:virtual public Student{
    protected:
    public:
    void set_computer(int c){
        computer=c;
    }

};
class Total:public Math,public Computer{
    protected:
    public:
    void result(){
        // set_name("shanif","5th");
        show_data();
        total=math+computer;
        cout<<"Total marks is : "<<total<<endl;
    }
};
int main()
{
    Total obj;
    obj.set_name("shanif","th");
    obj.set_math(100);
    obj.set_computer(100);
    obj.result();
return 0;
}
// In this example, class Total inherits from both Math and Computer, which in turn inherit from Student.
//  This creates two instances(Copies or objects) of Student class in the inheritance hierarchy (Math and Computer each have their own Student base class). 
// This situation is known as the "diamond problem."

// With the virtual keyword, a single instance of Student is shared among the base classes Math and Computer.
//  This ensures that the diamond problem is resolved, 
// and the ambiguity related to multiple instances of the same base class is eliminated.