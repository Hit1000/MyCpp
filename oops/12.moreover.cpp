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

            complex operator -(){
                complex temp;
                temp.a=-a;
                temp.b=-b;
                return temp;
            }

            void display(){
                cout<<"a = "<<a<<" b = "<<b<<endl;
            }
    };
    
    
int main(){
    complex a,b;
    a.setdata(1444,3);
    // b=a.operator-();
    b=-a;
    b.display();

    
    
    
    return 0;
}