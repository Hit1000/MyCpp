#include<iostream>
using namespace std;
    
    class complex{
        int a,b;
        public:
            complex(){}
            complex(int x):a(x),b(0){}

            void setdata(int a,int b) {
                this->a=a;
                this->b=b;
                }

            operator int(){
                return a;
            }

            void display(){
                cout<<"a = "<<a<<" b = "<<b<<endl;
            }
    };
    
    
int main(){
    complex c;
    c.setdata(1,2);
    c.display();
    int k;
    k=c;
    cout<<k;

    
    
    
    return 0;
}