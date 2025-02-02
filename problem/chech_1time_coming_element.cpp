#include<bits/stdc++.h>
#include<numeric>
using namespace std;
    
    
    
    
int main(){
    int a[] = {1,1,2,2,4,4,7,7,9,6,9};
      
                                // sum of set *2 - sum of array
    int len = sizeof(a)/sizeof(a[0]);
    
    set<int> s(a,a+len);

    int sum_set=0;
    int sum=0;

    sum_set = accumulate(s.begin(), s.end(), sum_set);
    sum = accumulate(a, a + len, sum);

    cout<<(sum_set*2)-sum;
    
    

}