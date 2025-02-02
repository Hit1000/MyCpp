#include<iostream>
#include<math.h>
using namespace std;
    
int main(){
    int a=20;
    int *p=&a;
    int **p2=&p;
    cout<<p2<<endl;
    cout<<&p<<endl;


    return 0;
}   