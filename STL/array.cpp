#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a={1,2,3,4,5};
    cout<<a.size()<<endl;
    swap(a[1],a[2]);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Value at index 2"<<a.at(2)<<endl;
    cout<<"Is empty"<<a.empty()<<endl;
    cout<<"First: "<<a.front()<<endl;
    cout<<"First: "<<a.back()<<endl;

return 0;
}