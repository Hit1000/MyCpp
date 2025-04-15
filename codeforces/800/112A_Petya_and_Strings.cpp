#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int n=a.size();
    for(int i=0, j=0; i<n; i++, j++){
        if(tolower(a[i]) < tolower(b[i])){
            cout<<-1;
            return 0;
        }
        else if(tolower(a[i]) > tolower(b[i])){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}