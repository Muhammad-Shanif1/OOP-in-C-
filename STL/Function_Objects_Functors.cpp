#include<iostream>
#include<algorithm>
using namespace std;
class integer{
    int num=2;
    public:
    void operator()(int n){
        num+=n;
    }
    void print(){
        cout<<num<<endl;
}
};
int main()
{
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    integer a;
    a.print();
    a(2);
    a.print();
    int arr[]={3,2,24,5,5,3,3};
    // sort(arr,arr+5);    //sort first 5 elements in ascending order
    sort(arr,arr+7,greater<int>());   //sort in descending order.
    for (int i = 0; i <7; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}