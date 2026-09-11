#include<iostream>
using namespace std;
class s{
    int i,m;
    public:
    s(int id,int marks): i(id),m(marks){}
    s(int n){
        cout<<"Debug";
    }
    void display();
};
void s::display(){
    cout<<"id is: "<<i;
    cout<<"Marks is: "<<m;
}
s func(int id,int marks){
    s n(id,marks);
    return n;
}
int f(int n){
    return n;
}
int main()
{
    s ob(func(9,12));
    // s ob=func(9,12);
    // s on(f(6));
    ob.display();
return 0;
}