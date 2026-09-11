#include<iostream>
using namespace std;
class Address{
    public:
    string country,city,colony;
    Address(string cn,string ci,string co):country(cn),city(ci),colony(co){}
};
class Person{
    public:
    Address *address;
    string name;
    Person(string n,Address *address):name(n),address(address){}
    void display(){
        cout<<"Name: "<<name<<"\nCountry: "<<address->country<<"\nCity: "<<address->city<<"\nColony: "<<address->colony;
    }
};
int main()
{
    Address add1("Pakistan","Lahore","Samanabad");
    Address add2=Address("Pakistan","Faisalabad","Malak Poor");
    Person p1("Shanif",&add1);
    Person p2=Person("Shanif",&add2);
    p1.display();
    cout<<endl;
    p2.display();

return 0;
}