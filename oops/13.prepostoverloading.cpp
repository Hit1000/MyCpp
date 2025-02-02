#include<iostream>
using namespace std;
    
    class complex{
        int a,b;
        public:
            // complex(){}
            // complex(int x):a(x),b(0){}

            void setdata(int a) {
                this->a=a;
                // this->b=b;
                }

            complex operator++(){
                complex temp;
                temp.a=++a;
                return temp;   
            }

            complex operator++(int){
                complex temp;
                temp.a=a++;
                return temp;   
            }
          

            void display(){
                cout<<"a = "<<a<<endl;
            }
    };
    
    
int main(){
    complex a,b;
    a.setdata(4);
    a.display();
    b=a++;
    a.display();
    b.display();
    
    return 0;
}