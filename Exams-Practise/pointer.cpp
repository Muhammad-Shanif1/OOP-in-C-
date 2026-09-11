#include<iostream>
using namespace std;
class n{
    int id=9;
    public:
    friend class s;
    void msg(){
        cout<<"Hello";
    }
};
class s{

    public:
    void call(n *obj){
        cout<<obj->id;
    }
};
int main()
{
    n *ptr=new n;
    s m;
    (*ptr).msg();
    m.call(ptr);
return 0;
}