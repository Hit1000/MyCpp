#include<iostream>
using namespace std;

 class emp{

    int a ,b, c;
    public:
    int d, e;

    void set(int a, int b, int c);
    void display();
 };

 void emp::set(int a, int b, int c){
    this -> a =a;
    this -> b =b;   
    this -> c =c;
 }
  
void emp::display(){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << " This is garbage "<< endl;
    cout << "e = " << e << endl;
}

int main(){
    emp a1;
    a1.set(1,2,3);
    a1.e=8;

    a1.display();
    
    
    
    return 0;
}