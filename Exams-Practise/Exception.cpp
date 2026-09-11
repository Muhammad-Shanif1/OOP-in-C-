#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    int n1,n2,res;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    try{
        if(n2!=0){
        res=n1/n2;
        cout<<"Answer is: "<<res<<endl;
        }
        if(n2==2){
            throw invalid_argument("Even number");
        }
        else{
            throw(n2);
        }
    }
    catch(int number){
        cout<<"Divisible by zero not allowed";
    }
    catch(invalid_argument& e){
        cout<<"Yes even"<<e.what();
    }
return 0;
}
/*
try {         
     // Code that might throw an exception
     throw SomeExceptionType("Error message");
 } 
catch( ExceptionName e1 )  {   
     // catch block catches the exception that is thrown from try block
 } 


*/


// catch (...)        used to catch any type of exceptions