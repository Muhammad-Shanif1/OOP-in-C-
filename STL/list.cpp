#include<iostream>
#include<list>
using namespace std;
template <class T>
void display(list<T> &lst){
    typename list<T> :: iterator it; 
//The typename keyword is used to clarify to the compiler 
// that the dependent name is a type, not a variable or a function.
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
// void display(list<char> &lst){
//     list<char> :: iterator it;
//     for (it = lst.begin(); it != lst.end(); it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
int main()
{
    list<int> list1;    //empty list of 0 length
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    display(list1);
    list1.pop_back();    //removes one element at end
    list1.pop_back();
    display(list1);
    list1.pop_front();      //removes one element at begin.
    display(list1);

    list<char> list2(4);
    list<char>::iterator it;
    it=list2.begin();
    *it='p';
    it++;
    *it='m';
    it++;
    *it='a';
    it++;
    *it='h';
    display(list2);
    // list2.remove('b');    //removes 'b' in the list
    list2.sort();
    display(list2); 
    list<int> list3={6,7,8,9};
    list3.merge(list1);
    display(list3);
    list3.reverse();
    display(list3);
return 0;
}