#include<iostream>
using namespace std;
class get_no{
    protected:
    int n;
    public:
    get_no(int no){
        n=no;
    }
};
class square:protected get_no{
    protected:
    int sq;
    public:
    square(int no):get_no(no){
        sq=n*n;
        cout<<"Square of number "<<n<<" is: "<<sq<<endl;
    }
};
class cube:protected get_no{
    protected:
    int cb;
    public:
    cube(int num):get_no(num){
        cb=n*n*n;
        cout<<"Cube of number "<<n<<" is: "<<cb<<endl;
    }
};
int main()
{
    int sqn,cbn;
    cout<<"Enter number to find square: ";
    cin>>sqn;
    square obj1(sqn);
    cout<<"Enter number to find cube: ";
    cin>>cbn;
    cube obj2(cbn);
return 0;
}