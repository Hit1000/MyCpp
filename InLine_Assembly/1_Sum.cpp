#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, result, c, d;
    cin>>c>>d;
    // Inline assembly to add two numbers
    asm (
        "addl %%ebx, %%eax;" // Assembly instruction
        "addl %%ecx, %%eax;"
        "addl %%edx, %%eax;"
        : "=a" (result)      // Output operands
        : "a" (a), "b" (b), "c"(c), "d"(d)   // Input operands
    );
    
    cout << result << endl; // Outputs 15
    return 0;
}