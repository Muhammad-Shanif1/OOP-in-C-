#include<iostream>
using namespace std;
class s{
    public:
    void display(){
        cout<<"Called";
    }
};
s fx(s obj){
    cout<<"Hello";
    return obj;
}
int main()
{
    s *ptr=new s();
    // (*ptr).display();
    ptr->display();
    s *ptr1=new s(fx(*ptr));
    ptr->display();
    delete ptr;
return 0;
}