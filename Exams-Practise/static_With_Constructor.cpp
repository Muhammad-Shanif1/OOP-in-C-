#include<iostream>
using namespace std;
class s{
    public:
    static int count;
    static void plusCount(){
        count++;
    }
    s(){}
    s(int v){
        count+=v;
    }
    void display(){
        cout<<count;
    }
};
int s::count=0;
int main()
{
    s obj[5];
    for (int i = 0; i <5; i++)
    {
        if(i==3){
            obj[i]=s(2);
        }else{
        obj[i].plusCount();
        }
    }
    
    obj[6].display();       //shows 7
return 0;
}