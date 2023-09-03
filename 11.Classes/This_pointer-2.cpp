#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Account
{
private:
    double balance;

public:
    void set_balance(double balance);
    double get_balance();
    void compare_balance(const Account &other);
    // Constructor
    Account(double d);
    Account(const Account &sources);
    ~Account(){};
};

void Account::set_balance(double balance)
{
    this->balance = balance;
}

double Account::get_balance()
{
    return balance;
}

void Account::compare_balance(const Account &other)
{
    if (this == &other)
        cout << "They are same." << endl;
    else
        cout << "They are not same." << endl;
}

Account::Account(double bal) : balance{bal}
{
}

Account::Account(const Account &sources) : Account{sources.balance}
{
}

int main()
{
    cout << "Arm Accounts" << endl;
    Account arm{10.5};
    cout << arm.get_balance() << endl;
    arm.set_balance(2000.0);
    cout << arm.get_balance() << endl;

    cout << "\nArm Accounts Comparing with arm" << endl;
    arm.compare_balance(arm);

    cout << "\nGarden Accounts" << endl;
    Account garden{arm};
    cout << garden.get_balance() << endl;
    garden.set_balance(5555.0);
    cout << garden.get_balance() << endl;
    cout << arm.get_balance() << endl;

    cout << "\nArm Accounts Comparing with garden" << endl;
    garden.compare_balance(arm);

    return 0;
}