#include<iostream>
using namespace std;

void Merge(int arr[], int low , int mid, int high){
    int temp[high] = {0};
    int left = low;
    int right = mid + 1;
    int count = 0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[count] = arr[left];
            left++;
        }
        else{
            temp[count] = arr[right];
            right++;
        }
        count++;
    }
    while(left<=mid){
        temp[count]=arr[left];
        left++;
        count++;
    }
    while(right<=high){
        temp[count] = arr[right];
        right++;
        count++;
    }
    for(int i=low; i<=high;  i++){
        arr[i] = temp[i-low];
    }
}

void MergeSort(int arr[], int l, int h){
    if(l==h)return;
    int mid = l+(h-l)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,h);
    Merge(arr,l,mid,h);
}



int main(){
    int arr[6] = {7, 40, 4, 3, 69, 9};
        MergeSort(arr, 0, 5);
        for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
        {
            cout << arr[i] << " ";
        }
}