#include<iostream>
using namespace std;

int main(){
    int a,b;
    // cout<<"Enter 2 number: ";
    // cin>>a>>b;// it ignore tab, space, enter, etc
    // cout<<"\nyou have enter "<<a<<" and "<<b<<endl;
    
    // a=cin.get();//it only take first input and give its ascii value
    // cout<<"This is value of cin.get() :"<<a;



    // a=2;
    // if (a==2){
    //     cout<<a;
    // }
    // else if(a>1){
    //     cout<<"h";
    // }
    


////// This is to show which type of char is store

    // char c='g';
    // if(int(c)>=48 && int(c)<=57){cout<<"It is a Number\n";}
    // else if(int(c)>=65 && int(c)<=90){cout<<"It is a upper case\n";}
    // else if(int(c)>=97 && int(c)<=122){cout<<"It is a lower case\n";}
    
    // cout<<int(c);


cin>>a;
for(int i =2;i<a;i++){
    if(a%i==0){
        cout<<"not prime";
        break;
    }
    else{
        cout<<"prime";
        break;
    }
}

}