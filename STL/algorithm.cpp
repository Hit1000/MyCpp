// #include<iostream>
using namespace std;
// #include<algorithm>
// #include<vector>
    #include<bits/stdc++.h>
    
    
int main(){
    vector<int> v;  
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);
    v.push_back(9);
    v.push_back(1);

    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    //finding using binary search

    cout<<binary_search(v.begin(),v.end(),4)<<endl;
    
    //lower bound and upper bound

    cout <<"lower bound "<<std::lower_bound(v.begin(), v.end(), 3)-v.begin()<<endl;
    cout <<"upper bound "<<std::upper_bound(v.begin(), v.end(), 3)-v.begin()<<endl;

    //max and min 

    int a=5;
    int b =8;
        
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<a<<endl;

    //reverse the string 

    string sa ="abcd";
    reverse(sa.begin(),sa.end());
    cout<<sa<<endl;

    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}