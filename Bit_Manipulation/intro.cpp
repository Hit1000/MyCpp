#include<bits/stdc++.h>
using namespace std;
    
    
    int xor_to(int n){
        int sum=0;
        for(int i=1; i<=n; i++){
            sum=sum^i;
        }
        return sum;
    }
    
int main(){
    
    int and_eg = 5 & 7 & 9;
    cout<<and_eg<<endl;
    
    int flip = ~-8;
    cout<<flip<<endl;

    int not_eg = 5;
    cout<<!not_eg<<endl;

    bitset<8> b1(8);
    bitset<32> b2(flip);
    cout<<b1<<endl;
    cout<<b2<<endl;
    cout<<~b2<<endl;

    cout<<(10>>3)<<endl;
    cout<<(12>>3)<<endl;// its like 12 divided by 2 3 times to produce 1 

    cout<<(12/pow(2,3))<<endl; // this is the remainder

    cout<<(1<<31)<<endl;
    bitset<32> b3(1<<30);
    cout<<"b3 "<<b3<<endl;


    cout<<(2^3)<<endl;
    cout<<(1^2)<<endl;
    
    int n = 6;
    int m = 2;
    cout<<"xor of "<<n<<" is "<<xor_to(n)<<endl;
    cout<<"xor of "<<m<<" is "<<xor_to(m)<<endl;
    cout<<"xor of "<<" is "<<(xor_to(m)^xor_to(n))<<endl; // 3 to 6 

        int sum=0;
        for(int i=3; i<=6; i++){
            sum=sum^i;
        }
        cout<<sum<<endl;

        cout<<(7&1)<<endl;


        cout<<(!0)<<endl;
        cout<<(~0)<<endl;
    return 0;
}