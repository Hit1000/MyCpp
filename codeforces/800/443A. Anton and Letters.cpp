#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    string s;
    getline(cin, s);
    // cout<<s;
    unordered_set<char> set;
    for(char c:s){
        if(c >= 'a' && c <= 'z'){
            set.insert(c);
        }
    }
    cout<<set.size();

    return 0;
}