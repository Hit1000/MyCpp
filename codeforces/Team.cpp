#include<iostream>
using namespace std;
int main(){
    int ans = 0;
    int x = 0;
    cin>>x;
    for(int i=0; i<x; i++){
        int arr[3];
        for(int j=0; j<3; j++){
            cin>>arr[j];
        }
        int count = 0;
        for(int j:arr){
            if(j == 1){
                count++;
            }
        }
        if(count >= 2){
            ans++;
        }
    }
    cout<<ans;
}
