#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="shanif";
    m[2]="shanif1";
    m[3]="shanif2";
    m.insert({4,"shanif4"});
    for (auto i :m)
    {
        cout << "Key: " << i.first << ", Value: " << i.second << endl;
    }
    cout<<"Is 2 is present"<<m.count(2)<<endl;
    m.erase(2);
    for (auto i :m)
    {
        cout << "Key: " << i.first << ", Value: " << i.second << endl;
    }
return 0;
}