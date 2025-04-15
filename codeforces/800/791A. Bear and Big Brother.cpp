#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1; i<INT_MAX; i++){
        a *= 3;
        b *= 2;
        if(a > b){
            cout<<i;
            break;
        }
    }
    return 0;
}