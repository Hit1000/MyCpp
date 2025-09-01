#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n, a, b;
        cin>>n>>a>>b;
        if(n%2 != b%2){
            cout<<"NO"<<endl;
        }
        else if(a>b && n%2 != a%2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}