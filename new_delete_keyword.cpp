#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int(5);        //dynamic memory allocation
    cout<<*ptr<<endl;
    //array
    int *arr=new int[3];
    int *vr=new int(4);
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    *(arr+3)=4;
    delete vr;       //it deletes the vr
    delete[] arr;     //it deletes the complete contiguous block of memory.
    cout<<*arr<<endl;    //it shows index 0
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<*vr<<endl;
    
return 0;
}