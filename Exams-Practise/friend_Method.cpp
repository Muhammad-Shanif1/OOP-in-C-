#include<iostream>
using namespace std;
class n{       //Forward Declaration
    public:
    void access();
};
class s{
    string id="ten";
    public:
    friend void n::access();
};
void n::access(){
    s o;
    cout<<o.id;
}
int main()
{
    n o;
    o.access();
return 0;
}
//Syntax
/*

class [class 2nd name]{
    public:
    return_type [function name]();                 forward declaration of a method
};

class [class 1st name]{
      friend return_type [class 2nd name]::[function name];              you can write everwhere in a class
OR    return_type friend [class 2nd name]::[function name];
};

return_type [class 2nd name]::[function name](){
    //code
}

*/