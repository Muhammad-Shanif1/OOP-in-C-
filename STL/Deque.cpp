#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(2);
    d.push_back(1);
    cout<<"Size is: "<<d.size()<<endl;   //fixed sized 
    for (int i:d) //range-based for loop   read as "for each element i in d do something "
    {   //we can use this loop in array and vector etc.
        cout<<i<<" ";
    }
    cout<<endl<<"Firs: "<<d.front()<<endl;
    cout<<"Last: "<<d.back()<<endl;
    cout<<d.at(1);
    d.erase(d.begin(),d.begin()+2);     //it removes first 2 elements. 
    cout<<"After erase: "<<d.size()<<endl;
    for (int i :d)
    {
        cout<<i;
    }
    
return 0;
}
//Deque pronounced as deck
//It is implemented as a dynamic array of fixed-size blocks, allowing efficient
//insertion and deletion at both ends of the sequence
//Unlike vectors, deques do not guarantee that all elements are stored in
//  contiguous memory locations.