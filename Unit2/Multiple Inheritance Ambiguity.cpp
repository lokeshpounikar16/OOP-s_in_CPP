#include <iostream>
using namespace std;

class Academic
{
public:
    void display()
    {
        cout << "Academic information" << endl;
    }
};

class Sports
{
public:
    void display()
    {
        cout << "Sports information" << endl;
    }
};

class Student : public Academic, public Sports
{
};

int main()
{
    Student s;

    s.Academic::display();
    s.Sports::display();

    return 0;
}