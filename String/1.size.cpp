#include<iostream>
#include<string.h>
using namespace std;
    
int main(){
     string str = "GeeksforGeeks";
    //   getline(cin, str); //take sting 
 
    // 1. size of string object using size() method
    cout << str.size() << endl;
 
    // 2. size of string object using length method
    cout << str.length() << endl;
 
    // 3. size using old style
    // size of string object using strlen function
    char arr[100]= "asdfasdfasdf";
    cout << strlen(arr) << endl; //not for string
    
    cout<<str.at(0);          //same as str[0]
    
    return 0;
}   