#include <iostream>
#include <math.h>
using namespace std;

class Student
{
public:
    int age;
    int rollNumber;
};
int main()
{
    // Create objects statically
    Student s1;
    Student s2;
    Student s3, S4, s5;
    s1.age = 24;
    s1.rollNumber = 101;
    cout << s1.age << endl;
    cout << s1.rollNumber << endl;
    s2.age = 30;
    
    // Create objects dynamicaaly
    Student *S6 = new Student;
    (*S6).age = 23;
    (*S6).rollNumber = 104;
    cout <<"this is calling with pointer :"<< (*S6).age << endl;
    cout <<"this is calling with arrow :"<< S6->rollNumber << endl;

    // other method on above 2 lines
    S6->age = 12;
    S6->rollNumber = 102;

}
