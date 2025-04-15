#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    string s;
    cin>>s;
    int u=0, l=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] <= 'z' && s[i] >= 'a') l++;
        else u++;
    }
    if(l >= u){
        for(int i=0; i<s.size(); i++){
            if(!(s[i] <= 'z' && s[i] >= 'a')){
                s[i] += 32;
            }
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(s[i] <= 'z' && s[i] >= 'a'){
                s[i] -= 32;
            }
        }
    }
    cout<<s;
    return 0;
}