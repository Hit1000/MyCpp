#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    int x = 0;
    int n = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        char a;
        char b;
        cin>>a>>b;
        cin>>a;
        if(b == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout<<x;
    
    
    
    return 0;
}