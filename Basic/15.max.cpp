#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a[]={2,3,4,5,6,5,4,4,3,22,6};
// cout<<sizeof(a)/4;
int n = sizeof(a) / sizeof(a[0]);
int max=a[0];
    for(int i =0;(i<n);i++){
        // max=0;
        if(a[i]>a[max]){
            max=i;
        }
    }
    
    sort(a,a+n);
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);}
int lar=0;
for(int j=n-1;j>0;j--){
    if(a[j]!=a[j-1]){
         lar =a[j-1];
            break;
    }
}
cout<<endl<<lar;
    return 0;
}