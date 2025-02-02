/*
https://www.geeksforgeeks.org/count-ways-to-reach-a-score-using-1-and-2-with-no-consecutive-2s/

Count ways to reach a score using 1 and 2 with no consecutive 2s
A cricket player has to score N runs, with condition he can take either 1 or 
2 runs only and consecutive runs should not be 2.
Find all the possible combination he can take.
*/

#include<bits/stdc++.h>
using namespace std;
#define loop(dp) cout<<endl;for(int i:(dp)){cout<<i<<' ';}cout<<endl;
int mod = 1e9+7;

int dfs(int n){
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return dfs(n - 1) + dfs(n - 3);
}
    
    
int main(){
    int n;
    cin>>n;
    cout<<dfs(n);
    return 0;
}