#include<iostream>
using namespace std;
class data{
    int a,b;
    public:
    friend void swap(data *);
    void setdata(int o,int k){
        a=o;b=k;
    }
    void display(){
        cout<<a<<endl<<b;
    };
};
void swap(data *ob){
    int temp;  
    temp=ob->a;     //use arrow operator to access members through pointer.
    ob->a=ob->b;
    ob->b=temp;
}
int main()
{
    data ob1;
    ob1.setdata(2,3);
    swap(&ob1);
    ob1.display();
return 0;
}