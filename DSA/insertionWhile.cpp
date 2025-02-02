#include<iostream>
using namespace std;
    
    int insert(int arraay[],int n){

        for(int i=1; i<n;i++){

            int temp = arraay[i];
            int j = i-1;

            while(j>=0 && arraay[j]>temp){
                arraay[j+1]=arraay[j];
                arraay[j] = temp;
                j--;
            }


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
