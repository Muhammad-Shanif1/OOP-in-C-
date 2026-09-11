#include<iostream>
using namespace std;
class Engine{
    public:
    Engine(){
        cout<<"I am a Engine\n";
    }
    ~Engine(){
        cout<<"Engine destroyed\n";
    }
};
class Car{
    public:
    Engine obj;
    Car(){
        cout<<"Thi is Car\n";
    }
    ~Car(){
        cout<<"Car Destroyed\n";
    }
};
int main()
{
    Car obj;
return 0;
}
//Syntax
/*
class Engine {
  // Class members and methods
};
class Car {
  Engine engine;
  // Class members and methods
};
*/


//"whole-part" Relationship
//Represents a strong relationship of association
//Parent object owns the child object
//When parent object deletes child object also deletes.  