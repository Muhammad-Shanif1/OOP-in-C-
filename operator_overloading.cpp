#include<iostream>
using namespace std;
class Count{
    int count=0;
    public:
    void show_count(){
        cout<<count<<endl;
    }
    // void operator ++(){       //for ++obj; 
    void operator ++(int){       //for obj++      this not for "-" and  "!"
        count++;
    }
    void operator --(){
        count++;
    }
    int operator +(int n){
        int res=n;
        return res;
    } 
};      
int main()
{
    Count obj,obj1;
    obj.show_count();
    // ++obj;
    obj++;
    obj.show_count();
    --obj;
    obj.show_count();
    cout<<obj+7;
return 0;
}
//By default Prefix
//Syntax
// return_Type operator op(){
//     function body;
// }

/*Commonly Overloaded Operators:
+, -, *, / (arithmetic operators)
==, !=, <, > (comparison operators)
+=, -=, *=, /= (compound assignment operators)
<<, >> (stream insertion/extraction operators)*/
// ++,--,-,!  (unary opertors)
//opertors which used between two operands  (binary operators)

// Note: Default Argument is not allowed in it