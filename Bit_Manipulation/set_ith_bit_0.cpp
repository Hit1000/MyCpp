#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    
    int n=10; 
    cout<<bitset<8>(n)<<endl;

    int i = 1;
    int mask = ~(1<<i);
  
    n = n&mask;
    cout<<bitset<8>(n)<<endl;
    
    
    
    return 0;
}