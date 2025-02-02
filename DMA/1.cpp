#include <iostream>
using namespace std;

int main() {
	int i = 65;
	char c = i; // this is typecasting which mean one type of data is casted into another type of data.
	cout << c << endl;

    char b='a';
    int bc=b;
    cout<<bc<<endl;

	int * p = &i;
	char * pc = (char*)p;

	cout << *p << endl;
	cout << *pc << endl;
	cout << *(pc + 1) << endl;
	cout << *(pc + 2) << endl;
	cout << *(pc + 3) << endl;
}