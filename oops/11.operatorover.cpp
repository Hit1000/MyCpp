#include<iostream>
using namespace std;
    
    class complex{
        int a,b;
        public:
            // complex(){}
            // complex(int x):a(x),b(0){}

            void setdata(int a,int b) {
                this->a=a;
                this->b=b;
                }

            complex operator + (complex c){
                complex c1;
                c1.a=a+c.a;
                c1.b=b+c.b;
                return c1;
            }

            void display(){
                cout<<"a = "<<a<<" b = "<<b<<endl;
            }
    };
    
    
int main(){
    complex a,b;
    complex *c= new complex;

    a.setdata(1,3);
    b.setdata(4,5);
    // c=a.operator+(b);
    (*c)=a+b;
    c->display();

    
    
    
    return 0;
}