#include<iostream>
using namespace std;
    
    class parent{
        int a,b;
        public:
        void getdata(int a,int b){
            this->a=a;
            this->b=b;
        }
        void printt();
        friend parent print(parent o1,parent o2);
    };
void parent::printt(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
        }
    parent print(parent o1,parent o2){
        parent o3;
        o3.a=o1.a+o2.a;
        o3.b=o1.b+o2.b;
        
        return o3;

    }
    
    
int main(){
    parent o1,o2, sum;
    o1.getdata(2,3);
    o2.getdata(5,5);

    sum=print(o1,o2);
    sum.printt();
    
    
    
    return 0;
}