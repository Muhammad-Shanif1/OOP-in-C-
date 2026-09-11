#include<iostream>
using namespace std;
//forward declaration
class sum;
class multi{
    public:
    int multiply(sum);
};
class sum {
    private:
    int a,b;
    // friend int multi :: multiply(sum);
    friend class multi;
    public:
    int add(){
        return a+b;
    }
    void set(int a1,int b1){
        a=a1;
        b=b1;
    }
};
int multi ::multiply(sum a){
return (a.a*a.b);
}
int main()
{
    sum ob;
    ob.set(2,3);
    cout<<ob.add()<<endl;
    multi ob1;
   cout<< ob1.multiply(ob);
return 0;
}