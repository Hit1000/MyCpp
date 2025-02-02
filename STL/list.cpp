#include<iostream>
using namespace std;
    
#include<list>
    
    
    
int main(){
    
    list<int> l;


    l.push_back(1);
    l.push_front(0);

    //coping list
    list<int> n(l);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    
    //inzilation of other
    list<int> p(10,2);
    for(int i:p){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    
    for(int i:l){
        cout<<i<<" ";
    }cout<<"after erase"<<endl;
    
    
    return 0;
}