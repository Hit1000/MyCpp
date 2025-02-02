#include<iostream>
using namespace std;


int main(){

    int n=6;
    for(int i=1;i<=n;i++){

        for(int j=1;j<n-i+1;j++){
            cout<<" ";
        }
        int val=1;
        for(int k=1;k<=i;k++){
            cout<<val<<" ";
            val=val*(i-k)/k;
        }
        cout<<endl;
    }

    return 0;
}