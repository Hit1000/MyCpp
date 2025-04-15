#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    int rate, amount, n;
    cin>>rate>>amount>>n;
    int borrow = rate*((n*(n+1))/2) - amount;
    if(borrow<0) cout<<0;
    else cout<<borrow;
    return 0;
}