#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
};

class Developer : public Employee
{
public:
    void setName(string n)
    {
        name = n;
    }

    void display()
    {
        cout << "Developer: " << name << endl;
    }
};

int main()
{
    Developer d;

    d.setName("Neha");
    d.display();

    return 0;
}