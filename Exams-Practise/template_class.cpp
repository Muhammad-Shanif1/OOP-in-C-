#include<iostream>
using namespace std;
template<class T1>
class Added{
    public:
    T1 n1,n2;
    Added(T1 num1,T1 num2):n1(num1),n2(num2){} 
    T1 add(){
        return n1+n2;
    }
    T1 multi();
};
template<typename T1>      //used if we define a methid outside the class 
T1 Added<T1>::multi(){
    return n1*n2;
}
int main()
{
    Added<int> obj(1,1);
    int res=obj.add();
    cout<<res;
    cout<<obj.multi();
return 0;
}