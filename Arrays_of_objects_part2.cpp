#include<iostream>
using namespace std;
class employee{
    int id,salary;
    public:
    void setdata(int i,int s){
        id=i;salary=s;
    }
    void showdata(){
        cout<<"Employee's id "<<id<<endl;
        cout<<"Employee's salary "<<salary<<endl;
    }
};
int main()
{
    int size=5,id,sl;
    employee *ptr=new employee[size];      //dereference operator "*"
    employee *ptrtemp=ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Employee's id: ";
        cin>>id;
        cout<<"Enter Employee's salary: ";
        cin>>sl;
        ptr->setdata(id,sl);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Data is given below\n";           
        // (ptr[i]).showdata();    can't used
        // (*ptr+i).showdata();    can't used
        // (*ptrtemp).showdata();
        ptrtemp->showdata();
        ptrtemp++;     
    }
return 0;
}