#include<iostream>
using namespace std;


int reverse(int arr[],int x){
    int start=0;
    int end=x-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarr(int arr[],int x){
    cout<<"print is : ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<"  ";
    }
cout<<endl;
}
int main(){

    int arr[5]={1,2,5,6,8};
    int arr2[6]={1,-4,2,5,6,8};
    //reverse so 1-8 and 2-6

    reverse(arr,5);
    reverse(arr2,6);

    printarr(arr,5);
    printarr(arr2,6);
    return 0;
}