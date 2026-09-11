#include<iostream>
using namespace std;
class data{
    private:
    int special=9;
    public:
    int getprivatedata(){
        return special;
    }
};
int main()
{
    data s1;
    cout<<s1.getprivatedata();
return 0;
}