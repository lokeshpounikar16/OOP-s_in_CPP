#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string n)
    {
        name = n;
    }
};

class Student : virtual public Person
{
public:
    Student() : Person("Unknown") {}
};

class Employee : virtual public Person
{
public:
    Employee() : Person("Unknown") {}
};

class TeachingAssistant : public Student, public Employee
{
public:
    TeachingAssistant(string n) : Person(n), Student(), Employee()
    {
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    TeachingAssistant t("Riya");

    t.display();

    return 0;
}