#include<bits/stdc++.h>
using namespace std;
    
    
    void iterative(int n){
        int count = 0;
        while(n!=0){
            n/=10;
            count++;
        }
        cout<<count<<endl;
    }

    int recursive(int n){
        if(n==0){
            return 0;
        }
        return 1 + recursive(n/10);
    }

    void logarithmic(int n){
        cout<<floor(log10(n)+1)<<endl;
    }

int main(){
    int number = 10395;
    
    iterative(number);
    
    cout<<recursive(number)<<endl;

    logarithmic(number);
    
    return 0;
}