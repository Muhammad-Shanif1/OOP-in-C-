#include<iostream>
using namespace std;
class p;
class s{
    public:
    void fx();
    void fc(p &obj);
};
class p{                
    public:
    void dispaly(){
        cout<<"Heloo";
    }
};
void s::fx(){
    cout<<"Called";
}
void s::fc(p &obj){
    cout<<"Called other";
    obj.dispaly();
}
// class p{       //shows error                 
//     public:
//     void dispaly(){
//         cout<<"Heloo";
//     }
// };
int main()
{
    s obj;
    obj.fx();
    p ob;
    obj.fc(ob);
return 0;
}