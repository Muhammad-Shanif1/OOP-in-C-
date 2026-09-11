#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity of v at now: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of v at now: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of v at now: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of v at now: "<<v.capacity()<<endl;  //double
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Element at index 2 is: "<<v.at(2)<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();   //It removes last element.
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
return 0;
}
//size means the total elements in a vector 
//capacity means the total memory allocated for a vector, and its always double than size
//