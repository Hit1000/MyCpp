#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<set>
    
    
    
int main(){
    
    set<int> s;

    s.insert(5);
    s.insert(8);
    s.insert(8);
    s.insert(2);
    s.insert(2);
    s.insert(6);
    s.insert(1);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;
    
    set<int>::iterator it = s.begin();
    it++;


    s.erase(it);
    // s.erase(s.begin());

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"it present - "<<s.count(5)<<endl;

    //find

    set<int>::iterator itr=s.find(6);

    // cout<<*itr;
    for(auto it= itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<(islower('c'))<<endl;
    unordered_set<int> ss;
    ss.insert('c');
    cout<<((!ss.count('c')))<<endl;

cout<<(1000^10);

    return 0;

}