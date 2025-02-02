#include<iostream>
using namespace std;
    
    int peakmount(int array[],int size){
        int s=0, e=size-1;

        int mid = s + (e-s)/2;

        while(s<e){
            if(array[mid]<array[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid = s + (e-s)/2;
        }
        // cout<<array[mid]<<endl;
        return mid;
    }
    
    
int main(){
    
    int arr[4]={1,30,4,1};

    int ans = peakmount(arr,4);
    
    cout<<ans;
    
    return 0;
}