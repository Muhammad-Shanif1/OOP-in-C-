#include<iostream>
using namespace std;
template<class T1=int,typename T2=int>
T1 added(T1 n1,T2 n2){
    return n1+n2;
}
template<class T1=int,typename T2=int,typename T3=int>    //one template for one function
T1 added(T1 n1,T2 n2,T3 n3){
    return n1+n2+n3;
}

int main()
{
    cout<<added<int,int>(1,2)<<endl;
    cout<<added(1.1,2.2)<<endl;
    cout<<added(1.1,2.2,4.4);

return 0;
}