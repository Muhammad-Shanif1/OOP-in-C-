#include<iostream>
using namespace std;
int main()
{
    int* memory=new int(65);
    // Forgot to delete allocated memory
    // delete memory;  // Uncommenting this line would fix the memory leak

return 0;
}