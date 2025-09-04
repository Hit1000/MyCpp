#include<bits/stdc++.h>
using namespace std;
#define loop(v) for(int i:(v)){cout<<i<<' ';}cout<<endl;
#define loop2d(v) for(auto i:(v)){for(int j:i){cout<<j<<' ';}cout<<endl;}
#define mod (int)1e9+7;
    
    /*
    ⚡ What Is Branch Prediction?
Modern CPUs are built for speed, and one of their tricks is speculative execution. When your code hits a conditional like if (x), the CPU doesn’t wait to evaluate x. Instead, it guesses which path will be taken and starts executing instructions ahead of time.

✅ If the guess is correct: execution continues smoothly.

❌ If wrong: the CPU flushes the pipeline, discards the speculative work, and starts over — costing 10–30 cycles or more.

This is why writing branch-friendly code matters in performance-critical systems like trading platforms or real-time engines.*/
#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)

int main(){
    
    if (likely(1)) {
    // fast path
    } else {
    // rare path
    }

    return 0;
}