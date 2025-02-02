#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    void rev(int array[],int start,int end){
        if(start>=end){return;}
        swap(array[start],array[end]);
        rev(array,start+1,end-1);
    }
    
    
int main(){
    int arr[5] = {1,2,3,4,5};

    rev(arr,0,(sizeof(arr)/sizeof(arr[0])-1));

    for(auto i:arr){
        cout<<i<<" ";
    }
    
    
    
    return 0;
}