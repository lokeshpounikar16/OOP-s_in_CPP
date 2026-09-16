#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void showPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person
{
public:
    int id;

    void showEmployee()
    {
        cout << "Employee ID: " << id << endl;
    }
};

class Manager : public Employee
{
public:
    int teamSize;

    void showManager()
    {
        showPerson();
        showEmployee();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    Manager m;

    m.name = "Ravi";
    m.id = 501;
    m.teamSize = 8;

    m.showManager();

    return 0;
}