#include <iostream>
using namespace std;

void swap(int num1,int num2){
    int temp;
    temp =num1;
    num1=num2;
    num2=temp;

    cout<<num1<<"  int fun  "<<num2<<endl;
};

int swap_ref(int &num1,int &num2){
    int temp;
    temp =num1;
    num1=num2;
    num2=temp;

    return num1,num2;
}
int main(){
    int a,b,temp;

    cout<<"please enter a "<<endl;
    cin>>a;
    cout<<"please enter b "<<endl;
    cin>>b;

    
    cout<<a<<"    "<<b<<endl;
    swap(a,b);
    cout<<a<<"  value  "<<b<<endl;
    swap_ref(a,b);
    cout<<a<<"  ref  "<<b<<endl;




    return 0;



/////////////// reverse a number


// int main()  
// {  
// int n, reverse=0, rem;    
// cout<<"Enter a number: ";    
// n=77908;
//   while(n!=0)    
//   {    
//      rem=n%10;      
//      reverse=reverse*10+rem;    
//      n/=10;    
//   }    
//  cout<<"Reversed Number: "<<reverse<<endl;     
// return 0;  
// } 
}