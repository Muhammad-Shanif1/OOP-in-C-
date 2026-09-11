#include<iostream>
using namespace std;
template<class T1,class T2>
class myClass{
    T2 data2;
    T1 data1;
    public:
    void setdata(T1 d1,T2 d2){
        data1=d1;data2=d2;
    }
    void show(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main()
{
    myClass <string,int>obj;
    obj.setdata("Roll No is: ",49);
    obj.show();
    
return 0;
}