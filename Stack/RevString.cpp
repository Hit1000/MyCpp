#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    string rev(string s){
        stack<char> a;
        int i=0;
        string ans;
        while(i!=s.size()){
            a.emplace(s[i++]);
        }

        while(!a.empty()){
            ans.push_back(a.top());
            a.pop();
        }
        return ans;
    }
    
    
int main(){
    
    // string s= "uhc ek aam iret";
    string s;
    // getline(cin,s);
    cin>>s;
    string ss = rev(s);
    cout<<ss;
    
    
    return 0;
}