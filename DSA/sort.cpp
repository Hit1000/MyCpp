#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {7, 40, 4, 3, 69, 9};
    vector<int> v;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
    {
        v.emplace_back(arr[i]);
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;
}