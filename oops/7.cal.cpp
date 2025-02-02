#include<iostream>
using namespace std;
    
class Simple{
    protected:
        int num1,num2;
    public:
        Simple(){}
        Simple(int num1,int num2){
            this->num1=num1;
            this->num2=num2;
        }

        void display(){
            cout<<"Add  : "<<num1+num2<<endl;
            cout<<"Subtract  : "<<num1-num2<<endl;
            cout<<"Multiple  : "<<num1*num2<<endl;
            cout<<"Divide  : "<<num1/num2<<endl;
        }
};
    
class Scientific{
    protected:
        int num1,num2;
    public:
    Scientific(){}
        Scientific(int num1,int num2){
            this->num1=num1;
            this->num2=num2;
        }

        void display(){
            cout<<"Add  : "<<num1+num2<<endl;
            cout<<"Subtract  : "<<num1-num2<<endl;
            cout<<"Multiple  : "<<num1*num2<<endl;
            cout<<"Divide  : "<<num1/num2<<endl;
        }
};
    
class Hybrid:public Simple,public Scientific{
    public:
        Hybrid(){}
        void process(int num1,int num2){
            Simple a(num1,num2);
            a.display();
            Scientific b(num1,num2);
            b.display();
        }
};
    
int main(){
    
    Hybrid set;
    set.process(20,5);
    
    
    return 0;
}