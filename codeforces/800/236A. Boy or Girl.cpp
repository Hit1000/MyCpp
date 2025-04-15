#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    string s;
    cin>>s;
    //////// time O(n) && space O(n);

    // set<char> se;
    // for(char c:s){
    //     se.insert(c);
    // }

    //////// time O(n) && space O(26);

    int count = 0;
    bool hash[26] = {false};
    for(char c:s){
        if(!hash[c-'a']){
            hash[c-'a'] = true;
            count++;
        }
    }

    
    if((count&1)) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}