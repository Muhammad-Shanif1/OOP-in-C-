#include<iostream>
using namespace std;
class EvenNumberExcep{};
class OddNumberExcep{};
int main()
{
    int n;
    cin>>n;
    try{
        // if(n%2==0){
        //     throw EvenNumberExcep{};
        // }
        // if(n%2!=0){
        //     throw OddNumberExcep{};
        // }
        if(n==24){
            throw string("it is 24");
        }
    }
    catch (EvenNumberExcep&){
        cout<<"Even number";
    }
    catch (OddNumberExcep&){
        cout<<"Odd number";
    }
    catch (string e){
        cout<<e;
    }
return 0;
}