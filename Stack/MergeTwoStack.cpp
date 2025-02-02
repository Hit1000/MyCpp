#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    
    stack<int> sortedMerge(stack<int> a,stack<int> b){
        stack<int> tmp;
        while(!a.empty()){
            tmp.emplace(a.top());
            a.pop();
        }
        while(!b.empty()){
            tmp.emplace(b.top());
            b.pop();
        }
        return tmp;
    }
    
    
int main(){
    stack<int> s1, s2;
    s1.push(34);
    s1.push(3);
    s1.push(31);
 
    s2.push(1);
    s2.push(12);
    s2.push(23);
 
    // This is the temporary stack
    stack<int> tmpStack = sortedMerge(s1, s2);
    cout << "Sorted and merged stack :\n";
    
    while (!tmpStack.empty()) {
        cout << tmpStack.top() << " ";
        tmpStack.pop();
    }
}