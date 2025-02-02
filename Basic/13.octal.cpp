#include<iostream>
#include<math.h>
using namespace std;
    
int main(){
    int rem,num=34;
    long ocral=0,i=1;

    while(num!=0){
        rem=num%8;
        num/=8;
        ocral=ocral+(rem*i);
        i*=10;

    }
    cout<<ocral;
    return 0;
}