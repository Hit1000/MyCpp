#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    int n, c=0;
    string s;
    cin>>n>>s;
    for(int i=1; i<n; i++){
        if(s[i-1] == s[i]) c++;
    }
    cout<<c;
    return 0;
}