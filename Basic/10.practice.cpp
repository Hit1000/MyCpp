
// #include <iostream>
// using namespace std;

// int func(int num){
//     if(num==0)
//     {return 1;}
//     return func(num- 1);
// }

// int main() {
//     int num = 5;
//     int ans = func(num);
//     cout << ans;

//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(char)<<endl;
//     cout<<sizeof(float)<<endl;
//     cout<<sizeof(double)<<endl;
//     cout<<sizeof(long)<<endl;
// }



#include<iostream>

using namespace std;

int main()

{

int a[3] = {30, 20, 10};

int *p = &a[2];

cout<<*p--<<" ";

cout<<*p;

return 0;

}