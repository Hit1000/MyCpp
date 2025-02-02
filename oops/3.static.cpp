#include <iostream>
using namespace std;

class emp
{
    int num;
    static int count;  // share by all of the object in class for ex -> a,b,c in this file share a same count

public:
    void set(int numm)
    {
        num = numm;
        count += 1;
    }
    void display()
    {
        cout << "Employee Number : " << num << "and it count is " << count << endl;
    }

    static void id()
    { // can only access static var only
        cout << "Employee ID : " << count << endl;
    }
};

int emp::count = 1000; // have to declare here and above

int main()
{
    emp a, b, c;

    a.set(101);
    a.display();
    emp::id();

    b.set(102);
    b.display();
    emp::id();

    c.set(103);
    c.display();
    emp::id();

    return 0;
}