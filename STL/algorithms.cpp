#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    cout<<"Finding 3 --> "<<binary_search(v.begin(),v.end(),3)<<endl;  //works on sorted data

    cout<<"1 at iterator --> "<<lower_bound(v.begin(),v.end(),1)-v.begin()<<endl;
    cout<<"1 at iterator --> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=2,b=1;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

    string name="abcdefg";
    reverse(name.begin(),name.end());
    cout<<name<<endl;
    //rotate means moves to right side
    rotate(v.begin(),v.begin()+1,v.end());  //we wanna rotate 1 element.
    for (int i :v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());  //uses intro sorting which is the combination of heap,insertion,quick 
    for (int i :v)
    {
        cout<<i<<" ";
    }
return 0;
}
// lower_Bound (>=)
//It returns the greater or eqaual index of number(k) which we wanna find.

// upper_bound (>)
//It returns the greater index of number(k) which we wanna find.

// if number(k) greater than largest numnber(max) in the sorted array,
//  then it return the next index of (max) in both case.

// if number(k) smaller than smallest numnber(min) in the sorted array,
//  then it return the zero index in both case.