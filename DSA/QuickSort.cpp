#include<iostream>
using namespace std;

int partion(int arr[], int low, int high){
    int position = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= position && i<high){
            i++;
        }
        while(arr[j] > position && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void quick(int arr[],int low ,int high){
    if(low < high){
        int pIndex = partion(arr,low,high);
        quick(arr,low,pIndex-1);
        quick(arr,pIndex+1,high);
    }
}



int main(){
    int arr[6] = {7, 40, 4, 3, 69, 9};
        quick(arr, 0, 5);
        for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
            cout << arr[i] << " ";
        
}