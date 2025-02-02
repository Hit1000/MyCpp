#include<iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,q;
    cin>>a>>q;
    
    int** arr=new int*[a];

    for(int i = 0; i < a; i++) {
        int k;
        cin >> k;
        arr[i]= new int[k];
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }    

    while(q-->0){
        int c,d;
        cin>>c>>d;
        cout<<arr[c][d]<<endl;
    }
    return 0;
}