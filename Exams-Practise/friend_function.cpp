#include<iostream>
using namespace std;
void show();     //forward declaration of a function
class s{
    int r=9;
    void friend show();
};
void show(){
    s k;       //not forget to make instance of a object
    cout<<k.r;
}
int main()
{
    show();
return 0;
}
//Syntax
/*
return_type [function name]();       //Forward declaration of a function
class [class name]{
    friend return_type [function name]();
    return_type friend [function name]();
}
return_type [function name](){
    //code
}
*/