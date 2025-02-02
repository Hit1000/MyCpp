#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    unordered_set<int> s;
    s.insert(10);   
    s.insert(5);   
    s.insert(15);   
    s.insert(20);   
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<(s.find(5)!=s.end()?"Yes":"No");
    
    return 0;
}