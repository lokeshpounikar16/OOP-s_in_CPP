#include <iostream>
using namespace std;

class Academic
{
public:
    int academicMarks;

    void showAcademic()
    {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

class Sports
{
public:
    int sportsMarks;

    void showSports()
    {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Student : public Academic, public Sports
{
public:
    void showTotal()
    {
        cout << "Total Marks: "
             << academicMarks + sportsMarks << endl;
    }
};

int main()
{
    Student s;

    s.academicMarks = 80;
    s.sportsMarks = 15;

    s.showAcademic();
    s.showSports();
    s.showTotal();

    return 0;
}