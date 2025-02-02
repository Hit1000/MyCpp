#include<iostream>
#include<math.h>
using namespace std;
    
int main(){
    
    int a,b,c;

    a=3;
    b=5;
    cout<<"C de value par da"<<endl;
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<a+b;
        break;
    
    case 2:
        cout<<a-b;
        break;

    default:
        cout<<"shae value phar bhancho";
        break;
    }
    return 0;
}