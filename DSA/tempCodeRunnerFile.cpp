#include<iostream>
using namespace std;
    
    int insert(int array[],int num){
        for(int i = 1; i<num ;i++){
            int temp = array[i];
            int j= i-1;
            for(;j>=0; j--){
                if(array[j]>temp){
                    //swift
                    array[j+1]=array[j];
                }

                else{
                    break;
                }
            }
                    array[j+1]=temp;
                    
        }
    }
    
    
int main(){
    int arr[6] = {7, 40, 4, 3, 69, 9};
    insert(arr, 6);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
    {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}   