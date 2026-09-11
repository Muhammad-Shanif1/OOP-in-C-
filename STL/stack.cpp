#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("shanif");
    s.push("talha");
    s.push("rohan");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") <<endl;
return 0;
}
//Stack is a container adapter that provides a LIFO (Last-In, First-Out) data structure