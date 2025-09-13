#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
/*
cout<<((s[0]%32))<<endl;
cout<<((s[0]&0x1f))<<endl;
cout<<(s[0]-97);
*/

int find_lower(char c){
    if(((0x104111)>>(c-97))&1) return 1;
    return 0;
}
    
int find_both(char c){
    if(((0x208222)>>(c&0x1f))&1) return 1;
    return 0;
}

int main(){
    string s;
    getline(cin, s);

    for(char i:s){
        cout<<find_lower(i)<<endl;
        cout<<find_both(i)<<endl;
    }

    return 0;
}