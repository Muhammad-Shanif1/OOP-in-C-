#include<iostream>
using namespace std;
class t{
    public:
    t& expose(){
        cout<<"Expose";
        return *this;
    }
    ~t(){
        cout<<"t";
    }
    void msg(){
    cout<<"End";
    }
};
class s{
    public:
    t *setIndex=new t();
    void display(){
            cout<<"Called";
        }
        ~s(){
        cout<<"s";
    }
    void temp();
};
class n{
    public:
    int n=9;
    s *stacked=new s();
    void show(string n){
        cout<<"Name is: "<<n;
    }
    ~n(){
        cout<<"n";
    }
    void temp(int){};
};
int main()
{
    n *obj=new n();
    // (*obj).show("Hello");
    obj->show("Hello");
    obj->stacked->setIndex->expose().msg();
    delete obj;
return 0;
}