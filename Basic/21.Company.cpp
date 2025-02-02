#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;
    Employee(string name, int id, double salary) : name(name), id(id), salary(salary) {}
};

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(string name, int id, double salary) : Employee(name, id, salary) {}
    double getWeeklySalary() {
        return salary / 52;
    }
};


class PartTimeEmployee : public Employee {
public:
    PartTimeEmployee(string name, int id, double salary) : Employee(name, id, salary) {}
    double getWeeklySalary() {
        return (salary / 52) / 2;
    }
};

class Consultant : public Employee {
public:
    int hoursWorked;
    Consultant(string name, int id, double salary, int hoursWorked) : Employee(name, id, salary), hoursWorked(hoursWorked) {}
    double getWeeklySalary() {
        return (salary * hoursWorked) / 52;
    }
};

int main() {
    FullTimeEmployee e1("John", 1, 80000);
    PartTimeEmployee e2("Jane", 2, 40000);
    Consultant e3("Bob", 3, 100, 10);

    cout << e1.name << " earns $" << e1.getWeeklySalary() << " per week." << endl;
    cout << e2.name << " earns $" << e2.getWeeklySalary() << " per week." << endl;
    cout << e3.name << " earns $" << e3.getWeeklySalary() << " per week." << endl;

    return 0;
}