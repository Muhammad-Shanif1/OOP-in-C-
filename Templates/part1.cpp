#include<iostream>
using namespace std;
template <class T>     //T is the any datatype
class Multiplication{
    public:
    int size;
    T *arr;
    Multiplication(int s){
        size=s;
        arr=new T[size];
    }
    T multi(Multiplication &obj){
        T m=0;
        for (int i = 0; i < size; i++)
        {
            m+=this->arr[i]*obj.arr[i];
        }
        return m;
    }
};
int main()
{
    // Multiplication ob1(3);
    // ob1.arr[0]=1;
    // ob1.arr[1]=2;
    // ob1.arr[2]=3;
    // Multiplication ob2(3);
    // ob2.arr[0]=1;
    // ob2.arr[1]=2;
    // ob2.arr[2]=3;
    // int r=ob2.multi(ob1);
    // cout<<r;
    // Multiplication<int> ob1(3);
    // ob1.arr[0]=1;
    // ob1.arr[1]=2;
    // ob1.arr[2]=3;
    // Multiplication<int> ob2(3);
    // ob2.arr[0]=1;
    // ob2.arr[1]=2;
    // ob2.arr[2]=3;
    // int r=ob2.multi(ob1);
    // cout<<r;
    Multiplication<float> ob1(3);
    ob1.arr[0]=1.2;
    ob1.arr[1]=2.2;
    ob1.arr[2]=3.3;
    Multiplication<float> ob2(3);
    ob2.arr[0]=1.4;
    ob2.arr[1]=2.5;
    ob2.arr[2]=3.4;
    float r=ob2.multi(ob1);
    cout<<r;

return 0;
}