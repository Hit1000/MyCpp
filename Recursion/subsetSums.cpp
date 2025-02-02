#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    vector<int> ans,arr;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int sum = 0;
    ans.push_back(sum);

    for (int i = 0; i < arr.size(); i++)
    {
        int size = ans.size();
        for (int j = 0; j < size; j++)
        {
            ans.push_back(ans[j] + arr[i]);
        }
    }

    sort(ans.begin(), ans.end());
    
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}