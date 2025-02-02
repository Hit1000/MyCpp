#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    
    int n = 6, m = 60, profit = 0;
    int w[] = {5,10,15,20,25,30};
    int p[] = {50,60,90,100,75,150};
    vector<tuple<int,int,int>> v;
    for(int i=0; i<n; i++){
        v.push_back({(p[i]/w[i]), p[i], w[i]});
    }

    sort(v.begin(), v.end(), greater<>());
    int i=0;
    for(i=0; i<n; i++){
        if(m>0 && get<2>(v[i])<=m){
            m -= get<2>(v[i]);
            profit += get<1>(v[i]);
        }
        else{
            break;
        }
    }
    cout<<profit<<" "<<m<<endl;
    // cout<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
    if(m>0){
        // profit = profit + 
    }
    cout<<profit<<" "<<m<<endl;
    for(auto it:v){
        cout<<get<0>(it)<<" "<<get<1>(it)<<" "<<get<2>(it)<<endl;
        
    }

    
    return 0;
}