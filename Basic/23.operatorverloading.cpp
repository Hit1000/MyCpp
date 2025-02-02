#include<iostream>
using namespace std;
    
    class don{
        float a,b;
        public:
        don(){}
        don(float a,float b){
            this->a=a;
            this->b=b;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }
        don operator++(){
            don temp;
            temp.a=++a;
            temp.b=++b;                    //pre
            return temp;
        }
        don operator++(int){
            don temp;
            temp.a=a++;
            temp.b=b++;                   //post must use int either float value or any other value
            return temp;
        }

    };
    
    
    
int main(){
    don obj1(2,3),obj2;
    obj1.display();
    obj2.display();
    obj2=obj1++;
    obj1.display();
    obj2.display();
    
    
    return 0;
}