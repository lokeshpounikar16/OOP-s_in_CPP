#include <iostream>
using namespace std;

class Vehicle
{
public:
    int rate;

    void display()
    {
        cout << "Rate per day: " << rate << endl;
    }

    virtual int rent(int days)
    {
        return rate * days;
    }
};

class Car : public Vehicle
{
public:
    int doors;

    void displayCar()
    {
        cout << "Car" << endl;
        display();
        cout << "Doors: " << doors << endl;
    }
};

class Bike : public Vehicle
{
public:
    int engine;

    int rent(int days) override
    {
        return rate * days * 0.9;
    }

    void displayBike()
    {
        cout << "Bike" << endl;
        display();
        cout << "Engine: " << engine << " cc" << endl;
    }
};

int main()
{
    Car c;
    c.rate = 2000;
    c.doors = 5;

    Bike b;
    b.rate = 800;
    b.engine = 150;

    c.displayCar();
    cout << "Rent for 3 days: "
         << c.rent(3) << endl;

    cout << endl;

    b.displayBike();
    cout << "Rent for 3 days: "
         << b.rent(3) << endl;

    return 0;
}