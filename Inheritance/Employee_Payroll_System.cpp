#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    virtual int salary() = 0;

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class PermanentEmployee : public Employee
{
public:
    int basic;
    int allowance;

    int salary() override
    {
        return basic + allowance;
    }
};

class ContractEmployee : public Employee
{
public:
    int rate;
    int hours;

    int salary() override
    {
        return rate * hours;
    }
};

int main()
{
    PermanentEmployee p;

    p.id = 101;
    p.name = "Asha";
    p.basic = 40000;
    p.allowance = 8000;

    p.display();
    cout << "Salary: " << p.salary() << endl;

    cout << endl;

    ContractEmployee c;

    c.id = 102;
    c.name = "Vikas";
    c.rate = 500;
    c.hours = 80;

    c.display();
    cout << "Salary: " << c.salary() << endl;

    return 0;
}