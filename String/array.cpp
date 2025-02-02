#include<iostream>
using namespace std;
    
    #include<array>
    
    
int main(){
    
    array<int,5> a = {83,5,72,4,6};



    for(auto i:a){
        cout<<i<<" " ;
    }cout<<"before "<<endl;

// for(int j=0;j<5;j++){
    // int temp = a[0];
    // for(int i=0;i<5;i++){                //forward
    //     swap(a[i],a[i+1]);
        
    // }
    // a[4] = temp;
// }


// int temp = a[4];
// for(int i=5;i>0;i--){                   //backward
//     swap(a[i-1],a[i]);
// }
// a[0]=temp;


for(int i=1;i<5;i++){
    swap(a[i+1],a[i]);                     //delete
}

    for(auto i:a){
        cout<<i<<" ";
    }

    
    
    return 0;
}