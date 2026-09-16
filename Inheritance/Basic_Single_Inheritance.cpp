#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    int rollNo;

    void showStudent()
    {
        showName();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.name = "Amit";
    s.rollNo = 101;

    s.showStudent();

    return 0;
}