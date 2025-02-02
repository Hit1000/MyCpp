#include<iostream>
using namespace std;
    
    class base{

    };
    
    class derived:public base{

    };
    
int main(){
    base *basePointer;
    base obj_base;
    derived obj_derived;
    basePointer = &obj_derived;
    
    
    
    return 0;
}