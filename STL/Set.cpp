#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(1);

    for (auto i :s)
    {
        cout<<i<<" "; //It prints only unique element,don't print repeatitive elements.
    }
    cout<<endl;
    set<int>::iterator itr=s.begin();
    // itr++;
    // s.erase(itr);
    for (int i :s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is 5 is present: "<<s.count(5)<<endl;
    set<int>::iterator it=s.find(3);    //returns an iterator.
    cout<<*it<<endl;
    cout<<"iterators are: \n";
    for (auto  i = itr; i !=s.end(); i++)
    {
        cout<<*i<<" ";
    }
    
    
return 0;
}
//Set is a container that implements a sorted, unique set of elements