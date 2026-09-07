#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    int length, width;

    void area()
    {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

class Circle : public Shape
{
public:
    int radius;

    void area()
    {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Rectangle r;
    r.length = 5;
    r.width = 3;

    Circle c;
    c.radius = 2;

    r.area();
    c.area();

    return 0;
}