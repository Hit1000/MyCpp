#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int x;
            cin>>x;
            if(x){
                cout<<abs(i-2)+abs(j-2);
            }
        }
    }
}

// brute force;
/*
int main(){
    vector<vector<int>> arr(5, vector<int>(5));
    int row = 0, col = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]){
                row = i;
                col = j;
            }
        }
    }

    int count = 0;
    while(row!=2){
        if(row<2) row++;
        if(row>2) row--;
        count++;
    }
    while(col!=2){
        if(col<2) col++;
        if(col>2) col--;
        count++;
    }
    cout<<count;

    return 0;
}
*/