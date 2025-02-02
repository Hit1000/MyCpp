#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    bool check(string &x,int i){
        if(i>= x.size()/2)
        {
            return true;
        }
        if(x[i]!=x[x.size()-i-1]){
            return false;
        }
            cout<<x[i]<<" "<<x[x.size()-i-1]<<"   ";
        return check(x,i+1);
    }
    
    
int main(){

    string a = "MADAM";
    string b = "gogogogg";
    string c = "1359889531";

    cout<<check(a,0)<<endl;
    cout<<check(b,0)<<endl;
    cout<<check(c,0)<<endl;
    
    return 0;
}