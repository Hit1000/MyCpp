#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 0;
    cin>>x;
    string s = "";
    int n = 0;
    int i = 0;
    while(i<=x){
        getline(cin, s);
        n = s.size();
        if(n>10)
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        else
            cout<<s<<endl;
        i++;
    }
    
    
    
    return 0;
}