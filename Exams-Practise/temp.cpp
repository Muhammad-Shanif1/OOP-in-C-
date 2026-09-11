#include<iostream>
using namespace std;
class s{
    public:
    int n=4;
    void operator -(int b){
        cout<<n;
    }
    void operator ++(){
        cout<<++n;
    }
    void operator !(){
        cout<<++n;
    }
};
int main()
{
    s o;
    int b;
    o-b;
    ++o;
    !o;
return 0;
}