#include <iostream>
using namespace std;

void printBinary(long n) {

    for (long i = 1 << 30; i > 0; i = i / 2) {
        if ((n & i) != 0) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
}

int main() {
    printBinary(7); // Output: 00000000000000000000000000000111
    cout << endl;
    printBinary(4); // Output: 00000000000000000000000000000100
    cout<<endl;
    printBinary(999999999);
    cout<<endl;
    printBinary(2147483647);
    cout<<endl;
    printBinary(1073741824);
    return 0;
}
