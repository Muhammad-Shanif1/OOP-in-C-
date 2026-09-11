#include<iostream>
using namespace std;
class dataOfStd{
    string name;
    int id,grade;
    public:
    dataOfStd(string,int,int);
    void show_data(){
    cout<<"Your name is: "<<name<<endl;
    cout<<"Your id is: "<<id<<endl;
    cout<<"Your grade is: "<<grade<<endl;
    if(grade>5){cout<<"You are senior\n";}
    else{cout<<"you are junior";}

    }
};
dataOfStd::dataOfStd(string n,int i,int g){
    name=n;
    id=i;grade=g;
    
}
int main(){
    int id,grade;
    string name;
    cout<<"Enter name of a student: ";
    cin>>name;
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter grade: ";
    cin>>grade;
    //Implicit call
    dataOfStd st1(name,id,grade);
    //Explicit call
    dataOfStd st2 = dataOfStd(name,id,grade);
    st1.show_data();
    return 0;
}
