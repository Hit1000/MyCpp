#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<array>
    
    
    
int main(){
    //normal array
    int a[4]={1,2,3,4};

    //stl array
    array<int,5> b = {1,3,2,4,5};

    //for size
    cout<<"size of both array - "<<    sizeof(a)/sizeof(a[1])<<" "<<b.size()<<endl;

    //access element
    cout<<"access element in stl array - "<<b[3]<<" "<<b.at(2)<<endl;
    //first element
    cout<<"first element - "<<b.front()<<endl;
    //last element
    cout<<"last element - "<<b.back()<<endl;

    //address of first element
    cout<<"address of array - "<<b.begin()<<endl;

    //empty
    cout<<"is array empty - 0/1 - "<<b.empty()<<endl;



    int arr[] = { 9,0, 1, 5, 8, 9, 6, 7, 3, 4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Sort the elements which lies in the range of 2 to
    // (n-1)
    sort(arr, arr + n);//include<bits/stdc++.h>
  
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  

    return 0;
}