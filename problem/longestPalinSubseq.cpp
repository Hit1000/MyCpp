#include<bits/stdc++.h>
using namespace std;
    
    
void help(int i, int n, string& s, vector<string>& ans){
    int size = 1<<n;
    for(int k = 0; k<size; k++){
        string str = "";
        for(int j=0; j<n; j++){
            if(k&(1<<j)){
                str += s[j];
            }
        }
        ans.push_back(str);
    }
}
int isPal(string &str){
    int i=0, j=str.size()-1;
    while(i<j){
        if(str[i] != str[j]) return 0;
        i++;j--;
    }
    return 1;
}
int longestPalinSubseq(string &s) {
    vector<string> ans;
    help(0, s.size(), s, ans);
    int maxi = 0;
    for(auto i:ans){
        // cout<<i<<endl;
        if(isPal(i)){
            int num = i.size();
            maxi = max(maxi, num);
        }
    }
    return maxi;
}
    
int main(){
    
    string s;
    getline(cin, s);
    cout<<longestPalinSubseq(s);
    return 0;
}