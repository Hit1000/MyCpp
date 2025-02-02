#include<iostream>
using namespace std;
    
#include<vector>
    
    
int main(){
    //creating vector 
    vector<int> v;

    //size check (for present element in vector)
    cout<<"Size of vector - "<<v.size()<<endl;

    //capacity check (space present in vector to store the maximun element)
    cout<<"capacity of vector - "<<v.capacity()<<endl;
    
    //adding the element 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Size of vector - "<<v.size()<<endl;
    cout<<"capacity of vector - "<<v.capacity()<<endl;

    //access element
    cout<<"access element in vector - "<<v[4]<<" "<<v.at(2)<<endl;

    //pop element
    for(int i=0;i<v.capacity();i++){
    cout<<v[i]<<" ";
    }cout<<"this is simple print"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<"brfore pop"<<endl;

    v.pop_back();
    v.erase(v.begin()+2);

    for(int i:v){
        cout<<i<<" ";
    }cout<<"after pop"<<endl;

    cout<<"Size of vector - "<<v.size()<<endl;
    cout<<"capacity of vector - "<<v.capacity()<<endl;

    //clear (but in this size is what clear, not capacity)
    v.clear();
    cout<<"after clear "<<endl;
    cout<<"Size of vector - "<<v.size()<<endl;
    cout<<"capacity of vector - "<<v.capacity()<<endl;
    



    return 0;
}