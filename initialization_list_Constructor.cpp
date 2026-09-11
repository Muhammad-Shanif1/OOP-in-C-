#include<iostream>
using namespace std;
class Test{
    // Case-1
    // int a;
    // int b;

    // Case-2
    int b;
    int a;

    public:
    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):b(j),a(i)
    // Test(int i,int j):a(i+2),b(j*2)
    // Test(int i,int j):a(i),b(j+i)
    // Test(int i,int j):a(i+j),b(j)
    // Test(int i,int j):a(i),b(j+a)
    // Case-1
    // Test(int i,int j):a(i+b),b(j)    //gives garbage value bcz "a" is
// initialized first with "i+b" in this line where b is garbage value at this time.

    // Case-2
    Test(int i,int j):a(i+b),b(j)  //gives correct value bcz "b" is declared first
// in line 9 and as same as declaration it is also initialized first with "j".

// Note:
// The varaible declared first is also initialized first in initialization list
//of contructor.
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};
int main()
{
    system("cls");
    Test obj(5,2);
return 0;
}