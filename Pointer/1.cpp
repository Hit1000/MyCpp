#include<iostream>
using namespace std;

int main(){
    double i=10;
    double *p=&i;

    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    cout<<sizeof(*p)<<endl;



    cout<<endl;



    char ch='b';
    char *chr=&ch;
    cout<<ch<<endl;
    cout<<static_cast<const void *>(&ch)<<endl;
    ch++;
    cout<<static_cast<const void *>(&ch)<<endl;
    cout<<chr<<endl;



    cout<<endl;



    char ii[]="abc";
    char *pp=&ii[0];

    cout<<pp<<endl;
    pp++;
    cout<<pp<<endl;
    cout<<sizeof(*pp)<<endl;



    cout<<endl;



    int a[10];
    int *b=a;
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    cout<<sizeof(a)<<endl;
    a[0]=10;
    a[1]=15;
    a[2]=20;
    cout<<a[0]<<"  "<<*(a+1)<<"  "<<2[a]<<endl;
    cout<<b[0]<<"  "<<*(b+1)<<"  "<<2[b]<<endl;

}