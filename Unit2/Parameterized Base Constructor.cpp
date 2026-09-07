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

class Student : public Person
{
public:
    int rollNo;

    Student(string n, int r) : Person(n)
    {
        rollNo = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s("Kiran", 24);

    s.display();

    return 0;
}