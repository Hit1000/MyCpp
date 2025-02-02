#include<iostream>
using namespace std;
    // class inhe syntex
    //class derivedClass  :  visibleStatuse  BaseClass

    // class inhe rules 
//      	                    Public Derivation        	Private Derivation       	Protected Derivation
// Private members           	Not Inherited              	Not Inherited             	Not Inherited              
// Protected members           	Protected                  	Private                    	Protected                    
// Public members           	Public                 	    Private                    	Protected

class base{
    int a;
    public:
    int b;
    void get();
    int getdata1();
    int getdata2();
};
    
void base::get(){
    a=20;
    b=44;
}

int base::getdata1(){    
    return a;
}

int base::getdata2(){    
    return b;
}

class branch : public base{
    int c;
    public:
        void process();
        void display();
  
};
    
void branch::process(){
    c=b*getdata1();
}

void branch::display(){
    cout<<getdata1()<<endl;
    cout<<getdata2()<< " " <<b<<endl;
    cout<<c<<endl;
}

int main(){
    branch tree;
    tree.get();
    tree.process();
    tree.display();
    
    
    return 0;
}