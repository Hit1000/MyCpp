#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int,int> m;

    m[2]=2;
    m[1]=8;
    m[5]=3;
    m.insert({6,7});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //finding

    cout<<"finding - "<<m.count(2)<<endl;

    m.erase(5);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }
cout<<endl;
    auto it = m.find(2);
    for(auto i = it; i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }


}
