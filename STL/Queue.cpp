#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> s;
    s.push("shanif");
    s.push("talha");
    s.push("rohan");
    cout<<"Top element: "<<s.front()<<endl;
    s.pop();
    cout<<"Top element: "<<s.front()<<endl;
    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") <<endl;
return 0;
}
//Queue is a container adapter that provides a FIFO (First-In, First-Out) data structure.