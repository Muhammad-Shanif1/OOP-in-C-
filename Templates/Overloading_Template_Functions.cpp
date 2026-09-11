#include<iostream>
using namespace std;
template<class T1>
class myClass{
    public:
    T1 d1;
    myClass(T1 n1){
        d1=n1;
    }
    myClass& display();
    void msg(){
        cout<<"that's it"<<endl;
    }
};
template<class T1>
myClass<T1>& myClass<T1>::display(){         //<T1> is used to tell that this is associated with a template
    cout<<d1<<endl;
    return *this;
}
int main()
{
    myClass<string> obj("hello world");
    obj.display().msg();   
return 0;
}