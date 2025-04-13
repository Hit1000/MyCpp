#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int maxi = 0, mini = 1e9;
        for(int i=0; i<m; i++){
            int a;
            cin>>a;
            maxi = max(maxi, a);
            mini = min(mini, a);
        }
        cout<<maxi-mini<<endl;
    }
    return 0;
}