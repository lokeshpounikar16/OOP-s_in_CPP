#include <iostream>
using namespace std;

class University
{
public:

    class Department
    {
    public:
        string name;

        void display()
        {
            cout << "Department: " << name << endl;
        }
    };
};

int main()
{
    University::Department d;

    d.name = "Artificial Intelligence and Data Science";

    d.display();

    return 0;
}