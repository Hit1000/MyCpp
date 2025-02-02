#include<iostream>
using namespace std;


int main(){
    int i=10;
    int &j=i;
    int k=50;
    j=k;
    cout<<&i<<" "<<&j<<endl;
    cout<<j<<" "<<i<<endl;
}
