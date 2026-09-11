#include<iostream>
using namespace std;
class Complex{
    public:
    int real,img;
    Complex(int r,int im):real(r),img(im){}
    Complex(){};
    Complex operator +(Complex &obj){
        Complex res;
        res.img=img+obj.img;
        res.real=real+obj.real;
        return res;
    }
};
int main()
{
    Complex c1(1,2),c2(1,2),c3;
    c3=c1+c2;
    cout<<c3.real;
    cout<<c3.img;
return 0;
}