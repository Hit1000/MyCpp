#include<iostream>
using namespace std;
    
int main(){
    int a=2;
    int b=3;
    cout<< (a&b) <<endl;
    cout<< (a|b) <<endl;
    cout<< ~a <<endl;
    cout<< (a^b) <<endl<<endl;


    cout<<(17>>1)<<endl;//001000
    cout<<(17>>2)<<endl;
    cout<<(17>>4)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;

    return 0;
}