#include<bits/stdc++.h>
#include<iostream>
using namespace std;

////////////////parameterised way   

//     void f(int n, int sum){
//         if (n == 0) {
//             cout << "Sum is: "<<sum<<endl;
//             return;
//         }
//         f(n-1,sum+n);
//     }
// int main(){
//     int n=4;
//     f(n,0);
//     return 0;
//}




////////////////functional recursion  

// int sum(int nn){
//     if(nn==1){
//         return 1;
//     }
//     return nn + sum(nn-1);
// }

// int main(){
//     int n = 3;
//     cout<<"sum is "<<sum(n)<<endl;
// }


int factrioal(int nn){
    if(nn==1){
        return 1;
    }
    return nn * factrioal(nn-1);
}

int main(){
    int n = 4;
    cout<<"sum is "<<factrioal(n)<<endl;
}
