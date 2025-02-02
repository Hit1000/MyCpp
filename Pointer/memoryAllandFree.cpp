#include<iostream>
using namespace std;
    
    int* j(int *a){
        int *p=  new int ;
        p = a;
        return p;
    }
    
    
int main(){
    int a = 2; 
    int *gg=NULL;
    gg=j(&a);
    cout<<*gg;
    free(gg);
    gg=NULL;
    
    
    
    return 0;
}