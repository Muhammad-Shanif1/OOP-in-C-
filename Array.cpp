#include<iostream>
using namespace std;
class data{
    private:
    int id,password;
    public:
    void getdata(){
        cout<<"\nEnter id: ";
        cin>>id;
        cout<<"Enter password: ";
        cin>>password;
    }
    void showdata(){
        cout<<"Your id is: "<<id;
        cout<<"\nYour password is :"<<password;
    }
};
int main()
{
    data sample[3];
    for (int i = 0; i < 3; i++)
    {
        sample[i].getdata();
        sample[i].showdata();
    }
return 0;
}