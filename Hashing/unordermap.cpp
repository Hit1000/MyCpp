#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    unordered_map<int,int> m;   
    m[1] = 206;
    m[3] = 422;
    m.insert({36,20});
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<(m.find(3)!=m.end()?"Yes":"No");
    return 0;
}