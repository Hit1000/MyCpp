//balance the bracket

#include<bits/stdc++.h>
using namespace std;

int main(){
    string  s;
    s = "()()()()()()(){(})(())";
    
    int size = s.size();
    int count1=0;

    for(int i = 0;i<size;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            count1++;
        }
        if(s[i]==')'||s[i]==']'||s[i]=='}'){
            count1--;
        }
    }
    
    if(count1==0){
        cout<<"balance"<<endl;
    }
    else{
        cout<<"Unbalance"<<endl;
    }
}