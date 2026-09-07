#include <iostream>
using namespace std;

class Account
{
private:
    int balance;

public:
    Account(int b)
    {
        balance = b;
    }

    friend class Auditor;
};

class Auditor
{
public:
    void showBalance(Account a)
    {
        cout << "Balance: " << a.balance << endl;
    }
};

int main()
{
    Account a(5000);

    Auditor au;
    au.showBalance(a);

    return 0;
}