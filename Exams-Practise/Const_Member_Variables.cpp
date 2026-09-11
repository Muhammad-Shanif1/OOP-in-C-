#include<iostream>
using namespace std;
class s{
    public:
    const int x=9;
    void show(){
        // x=8;         //error
        cout<<x;
    }
};
int main()
{
    s obj;
    obj.show();
return 0;
}