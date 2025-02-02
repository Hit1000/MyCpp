#include<iostream>
using namespace std;

class pprivate{
    int a;
    public:
    pprivate(int x):a(x){}
    void print(){
        cout<<a<<endl;
        }
        friend class acc;
};

class acc{
    int a;
    public:
    int aa(pprivate o);
    void print(){
        cout<<a<<endl;}
};
int acc::aa(pprivate o){
        return o.a;
    }
    
int main(){
    pprivate a1(9);
    acc o;
    int sum=o.aa(a1);
   cout<<sum;

  
}