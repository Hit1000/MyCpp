#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    vector<vector<int>> v;
    v.push_back(vector<int>(3,0)); 
    v.push_back(vector<int>(3,-1)); 
    v.push_back(vector<int>{4,5,6}); 
    for(int i=0; i<v.size(); i++){
        for(auto i:v.at(i)){
            cout<<i<<" ";
        }  
        cout<<endl;
    }
    
    
    
    return 0;
}