#include<iostream>
using namespace std;
    
#include<deque>
    
    
    
int main(){
    
    deque<int> d;

    //adding the element
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);

    //printing 
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //poping the element
    // d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //accessing the element
    cout<<"at any index - "<<d.at(0)<<endl;
    cout<<"first - "<<d.front()<<endl;
    cout<<"last - "<<d.back()<<endl;

    //deleating the element
    cout<<"before deleating - "<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+2);
    d.erase(d.begin());
    d.erase(d.begin());
    cout<<"after deleating - "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //empty check
    cout<<"is empty - "<<d.empty()<<endl;

    
    return 0;
}