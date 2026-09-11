#include<iostream>
using namespace std;
class base1{
    public:
    int no;
    void say(int n){
        cout<<"Hello base1 "<<n<<endl;
    }
};
class base2{
    public:
    void say(int n){      //its not a overriden function bcz it doesn't inherit Base1
        cout<<"Hello base2 "<<n<<endl;
    }
};
class derived:public base1,public base2{
    public:
    void say(int n){
        base1::say(5);       //<-------Ambiguity Resolution
    }
};
int main()
{
    derived obj;
    obj.say(5);
return 0;
}
//This situation is known as name hiding or name ambiguity.