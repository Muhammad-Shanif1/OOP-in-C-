#include<iostream>
#include<map>
using namespace std;
template <class T,class T2>
void display(map<T,T2> &mymap){
    typename map<T,T2>::iterator itr;
    for (itr = mymap.begin(); itr != mymap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;   
    }
    cout<<endl;
}
int main()
{
    map<string,int> data;
    data["Shanif"]=65;
    data["Talha"]=1;
    data["Shanif1"]=10;
    data["Shanif2"]=45;
    data["Shanif3"]=4;
    display(data);    //show according to the ascending order
    data.insert({{"Rohan",86},{"Rifqa",43}});
    display(data);
    cout<<"Size of map is : "<<data.size()<<endl;
    cout<<"Max size of map is: "<<data.max_size()<<endl;
    cout<<"Is empty: "<<data.empty()<<endl;

return 0;
}