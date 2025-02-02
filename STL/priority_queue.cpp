#include<iostream>
using namespace std;
    
#include<queue>
    
    
int main(){

    priority_queue<int> maxi;//max heap 
    priority_queue< int,vector<int>,greater<int> > mini;//min heap 

    maxi.push(3);
    maxi.push(5);
    maxi.push(2);
    maxi.push(8);
    maxi.push(4);

    int n = maxi.size();

    for(int i= 0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(3);
    mini.push(5);
    mini.push(2);
    mini.push(8);
    mini.push(4);

    int nn = mini.size();
    
    for(int i= 0; i<nn; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
    
    
    return 0;
}