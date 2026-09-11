#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    maxi.push(5);
    maxi.push(4);
    maxi.push(3);
    maxi.push(2);
    maxi.push(1);
    priority_queue<int,vector<int>,greater<int>> min;
    min.push(5);
    min.push(4);
    min.push(3);
    min.push(2);
    min.push(1);
    int l=maxi.size();
    for (int i = 0; i < l; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    int j=min.size();
    for (int i = 0; i < j; i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }


return 0;
}