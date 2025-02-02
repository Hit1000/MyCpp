#include<iostream>
using namespace std;
    
#include<queue>
    
    
int main(){
    
    queue<string> q;
    
    q.push("Hitesh");
    q.push("Singla");

    cout<<"top most element - "<<q.front()<<endl;

    q.pop();

    cout<<"top most element - "<<q.front()<<endl;//first element

    cout<<"size - "<<q.size()<<endl;

    q.push("Hitesh");

    cout<<"last - "<<q.back()<<endl;//last element

    cout<<"is empty - "<<q.empty();
    return 0;
}