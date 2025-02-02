#include<iostream>
using namespace std;

void fib(int num){
    int a,b,c,temp;
        a=0;
        b=1;
        c=0;
    for(int i=0;i<num;i++){
        c=a+b;
        cout<<a<<"  ";
        a=b;
        b=c;
    }
};

int main(){
    int a;
    a=8;
    fib(a);

}