#include<iostream>
#include<cstring>
using namespace std;
template<class T1,class T2>   //template is for only one.
//T1,T2 are parameters of the template which is used as placeholder of generic type
void show(T1 d1,T2 d2){
    cout<<d1<<d2<<endl;
}
// template<class T1,class T2>
template<typename T1,typename T2>    //also used instead of class      
float Avg(T1 n1,T2 n2){
    float avg=(n1+n2)/2;
    return avg;
}
int main()
{
    cout<<Avg(2.5,2)<<endl;
    show("My name is ","Shanif");
    show(2,4.5);
return 0;
}