#include<iostream>
using namespace std;
class s{
    public:
    int v=9;
    void show()const{
        // v=7;               //their data members cannot be modified after initialization
        cout<<"Called"<<v;
    }
    void display(){    //it is allow to make methods in it but it can't be called
        cout<<"Called2";
    }
};
int main()
{
    const s obj;
    obj.show();
    // obj.display();     //only const member functions can be called 
return 0;
}
// Const Objects: You can declare objects of a class as const. This means that their data members cannot be 
// modified after initialization, and only const member functions can be called on them.

