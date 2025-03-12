#include<bits/stdc++.h>
using namespace std;
    
    
    
    
int main(){
    int a;
    cin>>a;
    vector<int> arr;
    for(int i=0; i<a; i++){
        int b;
        cin>>b;
        arr.push_back(b);
    }

    priority_queue<int, vector<int>, greater<>> q;
    // priority_queue<int> q;
    for(int i:arr){
        q.push(i);
    }

    while(q.size() != 1){
        int num1 = q.top();
        // cout<<num1<<" ";
        q.pop();
        int num2 = q.top();
        // cout<<num2<<endl;
        q.pop();
        if(num1<0 && num2<0){
            num1 = num1+num2;
        }
        else{
            num1 = num2-num1;
        }
        q.push(num1);
    }
    cout<<q.top();
    
    
    return 0;
}