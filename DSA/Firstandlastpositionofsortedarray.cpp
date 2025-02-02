#include<iostream>
using namespace std;
    
    int firstocc(int array[],int size, int key){
        int s=0;
        int e=size-1;
        int mid= s + (e-s)/2;
        int ans = -1;

        while(s<=e){

            if(array[mid]==key){
                ans=mid;
                e=mid-1;
            }
            else if(key> array[mid]){
                s=mid+1;
            }
            else if(key<array[mid]){
                e=mid;//-1;
            }

            mid= s + (e-s)/2;
           
        }
        
        return ans;
    }

    int lastocc(int array[],int size, int key){
        int s=0;
        int e=size-1;
        int mid= s + (e-s)/2;
        int ans = -1;

        while(s<=e){

            if(array[mid]==key){
                ans=mid;
                s=mid+1;
            }
            else if(key> array[mid]){
                s=mid;//+1;
            }
            else if(key<array[mid]){
                e=mid-1;
            }

             mid= s + (e-s)/2;
           
        }
        
        return ans;
    }
    
    
int main(){
    
    int arr[10]={1,2,3,3,3,4,4,4,4,5};
    
    int gg = firstocc(arr,10,3);
    int g = lastocc(arr,10,4);
    cout<<gg<<endl;
    cout<<g;
    return 0;
}       
