#include<iostream>
using namespace std;
    /*of too type with opertor and constroctor  */
   
   class integer{
        int a,b;
        public:
            // integer(){}
            // integer(complex c){
            //     // a=c.a;
            //     // b=c.b;
            //     a=c.geta();
            //     b=c.getb();
            // }
            void setdata(int a,int b) {
                this->a=a;
                this->b=b;
                }
            void display(){
                cout<<"a = "<<a<<" b = "<<b<<endl;
            }
    };
    class complex{
        int a,b;
        public:
            void setdata(int a,int b) {
                this->a=a;
                this->b=b;
                }
            int geta(){
                return a;
            }
            int getb(){
                return b;
            }
            operator integer(){
                integer temp;
                temp.setdata(a,b);
                return temp;
            }
    }; 
    
int main(){
  complex c1;
  integer i1;
  c1.setdata(1,3);
  i1=c1;
  i1.display();
    
    return 0;
}