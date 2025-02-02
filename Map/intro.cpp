#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    map<int, int> m1;
    for(int i=0; i<3; i++){
        m1[i]++;
    }   
    for(auto x : m1){
        cout << "Key: "<<x.first<<" Value: "<<x.second<<endl;
    }
    
    
    return 0;
}