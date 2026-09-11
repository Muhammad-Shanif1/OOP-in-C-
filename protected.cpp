#include<iostream>
using namespace std;
class base{
    protected:
    int a=9;
    private:
    int b=8;
    public:
    int c=7;
};
/*                      Private derivation    Public derivation      Protected derivation 
private members         Not inherited         Not inherited          Not inherited
public members          private               public                 protected
protected members       private               protected              protected
*/
class derived:public base{
    public:
    void display(){
        cout<<c<<endl;
        cout<<a<<endl;      //Protected members can be accessed in child class.
    }
};
int main()
{
    derived ob;
    ob.display();
    base b;
    // cout<<b.a;     //protected members can't be access in main body
return 0;
}
