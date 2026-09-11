#include<iostream>
using namespace std;
class sample{
    int n;
    public:
    void set(int n){
        this->n=n;
        cout<<this->n;
    }
};
int main()
{
    sample o;
    o.set(3);
return 0;
}