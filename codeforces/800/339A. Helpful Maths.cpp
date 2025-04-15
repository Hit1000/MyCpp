#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    string s;
    getline(cin, s);
    int a=0,b=0,c=0, n=s.size();
    for(int i=0; i<n; i++){
        if(s[i] == '1') a++;
        if(s[i] == '2') b++;
        if(s[i] == '3') c++;
    }

    string ans = "";
    while(a != 0 || b != 0 || c != 0){
        if(a!=0){
            a--;
            ans+="1+";
            continue;
        }
        if(b!=0){
            b--;
            ans+="2+";
            continue;
        }
        if(c!=0){
            c--;
            ans+="3+";
        }
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}