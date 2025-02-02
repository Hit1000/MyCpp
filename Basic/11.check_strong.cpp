#include<iostream>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}

int findstrong(int num,int num2){
    long long sum=0;
    int num1;

while(num!=num2){
    sum=0;
    num1=num;
    while(num1!=0){
        sum+=fact(num1%10);
        num1/=10;
        // cout<<sum<<" ";
    }
    // cout<<sum;
    if(num==sum){

        cout<<num<<" ";
        // return num;
    }
    num++;
}
}

int main(){
    int n=2,n2=100000;
    // cin>>n;
    findstrong(2,50000);


    return 0;
}