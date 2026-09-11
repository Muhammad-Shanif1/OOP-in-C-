#include<iostream>
using namespace std;
class prime{
    private:
    int j,index=0,prime[200];
    public:
    void primenumber(int nth);
    void show_prime();
};
void prime::primenumber(int nth){
    for (int i = 1; i <=nth; i++)     
    {
        for (j = 2; j<=i; j++)
        {
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            // cout<<i<<endl;
            prime[index]=i;
            index++;
        }
    }
}
void prime::show_prime(){
    for (int i = 0; i < index; i++)
    {
        cout<<prime[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter nth to find primes: ";
    cin>>n;
    cout<<"Prime Numbera between 1 and "<<n<<" are: "<<endl;
    prime no;
    no.primenumber(n);
    no.show_prime();
    return 0;

}