#include<iostream>
using namespace std;
    
#include<stack>
    
    
int main(){
    
    stack<string> s;
    
    s.push("Hitesh");
    s.push("Singla");
    
    //top element
    cout<<"top element - "<<s.top()<<endl;

    s.pop();

    cout<<"top element - :"<<s.top()<<endl;
    cout<<"size of stack - "<<s.size()<<endl;
    cout<<"is empty - "<<s.empty()<<endl;
    return 0;
}