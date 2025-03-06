#include<bits/stdc++.h>
using namespace std;
    
void help(int i, int n, string& s, map<string,int>& mp, string str){
    if(i == n){
        mp[str]++;
        return ;
    }
    help(i+1, n, s, mp, str);
    help(i+1, n, s, mp, str+s[i]);
}

int lcs(string &s1, string &s2) {
    map<string,int> mp1, mp2;
    help(0, s1.size(), s1, mp1, "");
    help(0, s2.size(), s2, mp2, "");
    int maxi = 0;
    if(mp1.size() < mp2.size()){
        for(auto i:mp1){
            if(mp2.find(i.first) != mp2.end()){
                int size = i.first.size();
                maxi = max(maxi, size);
            }
            // cout<<i.first<<" "<<i.second<<endl;
        }
    }else{
        for(auto i:mp2){
            if(mp1.find(i.first) != mp1.end()){
                int size = i.first.size();
                maxi = max(maxi, size);
            }
            // cout<<i.first<<" "<<i.second<<endl;
        }
    }
    return maxi;
}
    
    
int main(){
    
    string a,b;
    getline(cin, a);
    getline(cin, b);
    cout<<lcs(a,b);
    
    
    return 0;
}