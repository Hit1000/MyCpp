#include<iostream>
using namespace std;
    
    class complex{
        int a,b;
        public:
            complex(){}
            complex(int x):a(x),b(0){}

            void display(){
                cout<<"a = "<<a<<" b = "<<b<<endl;
            }
    };
    
    
int main(){
    int k=5;
    complex c;
    c=k;
    c.display();

    
    
    
    return 0;
}