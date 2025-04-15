#include<bits/stdc++.h>
using namespace std;
#define loop(arr) cout<<endl;for(int i:(arr)){cout<<i<<' ';}cout<<endl;
int mod = 1e9+7;
      
int main(){
    
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &i:v){
        cin>>i;
    }
    
    int num_preset = v[k-1];
    int count = 0;

    for(int i:v){
        if(i>=num_preset && i>0) count++;
    }
    
    cout<<count;
    return 0;
}