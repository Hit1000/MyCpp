#include<bits/stdc++.h>
using namespace std;
    
    
int local(int n, vector<int> s, vector<int> e){
    vector<pair<int, pair<int,int>>> v;
    for(int i=0; i<n; i++){
        v.push_back({e[i]-s[i], {s[i], e[i]}});
    }
    sort(v.begin(), v.end(), [](pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
        return a.second.second < b.second.second;
    });
    // for(int i=0; i<n; i++){
    //     cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
    // }
    int count = 0;
    int free = 0;
    for(int i=0; i<n; i++){
        if(free < v[i].second.first){
            free = v[i].second.second;
            count++;
        }
    }
    return count;
}
    
int main(){
    int n = 0;
    cin>>n;
    vector<int> start, end;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        start.push_back(a);
    }
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        end.push_back(a);
    }

    int ans = local(n, start, end);
    cout<<ans;
}