#include<iostream>
using namespace std;
class number{
    public:
    number(){     //default constructor
        cout<<"Empty\n";
    }
    number(int a){     //parameterized constructor
        cout<<"Number is : "<<a<<endl;
    }   
    // When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj){    //Copy constructor
        cout<<"\nCopy Constructor called";
    }
};
int main()
{
    number a(5),c;
    //Copy Constructor calling
    number b=a;   
    // number b(a);     //also
    c=a;    //Copy Constructor not called bcz object already created above and default constructor called.
return 0;
}
//All Contructor must be public.
//For calling Copy Constructor, Default or Paramterized Contructor is mandatory 
//Parameterized Contructors can be overloaded  with different parameters