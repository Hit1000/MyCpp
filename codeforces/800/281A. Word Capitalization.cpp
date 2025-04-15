#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    string s;
    cin>>s;
    if(s[0] < 'a') cout<<s;
    else{
        s[0] = s[0]-(97-65);
        cout<<s;
    }
    return 0;
}