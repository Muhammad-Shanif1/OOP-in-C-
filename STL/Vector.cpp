#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T>&v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> vec;    //Zero length vector at now
    display(vec);     //Doesn't print anything bcz it is zero vector
    vector<char> vec1(4); //4 element chararter vector
    vector<int>vec3(6,3);   //6 elements of 3s
    display(vec3);  
    vec1.push_back('f');
    int element,size;
    cout<<"Enter the size of vector";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter number: ";
        cin>>element;
        vec.push_back(element);    //Add element at the end
    }
    vector<int> vec2(vec);    //4 element vector vec2 from vec.It copies all elements in vec2. 
    display(vec);
    display(vec2);
    vec.push_back(8);
    cout<<endl;
    display(vec);
    cout<<endl;
    vec.pop_back();
    display(vec);
    cout<<endl;
    vector<int>::iterator iter=vec.begin();
    vec.insert(iter,12);     //Insert element at index 0
    vec.insert(iter+2,2,12);     //it add 2 copies of "2" at index 2.
    display(vec);
    cout<<endl;
    vec.erase(iter+2);
    display(vec);
    cout<<endl;
return 0;
}
//An iterator in C++ is an object that allows the traversal of a container,