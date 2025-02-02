#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    
    int n,i;
    n=13;// 1101
    i=3; //yes
    // i=2; //yes
    // i=1; // no
    int mask = (1<<i);
    cout<<(mask&n)<<endl; // if 0 no else yess
    
    return 0;
}