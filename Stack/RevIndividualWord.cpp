#include<bits/stdc++.h>
using namespace std;

void rev(stack<char> &aa){
    while (!aa.empty()) {
        cout << aa.top() <<"";
        aa.pop();
    }cout<<" ";
}

int main() {

    string s = "nitin naman 2020202 ";
    stack<char> a;
    if(s.size()-1!=' '){
        s.push_back(' ');
    }
    for(int i=0 ; i<s.size();i++){
        if(s[i]!=' '){
        a.push(s[i]);
        }
        else{
            rev(a);
        }        
    }

    return 0;
}