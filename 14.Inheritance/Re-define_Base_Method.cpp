#include <iostream>

using std::cout;
using std::endl;

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);

protected:
    double balance;

public:
    Account(double amount = 0.0) : balance{amount}
    {
        cout << "Base Counstructor" << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Balance Sucessfully Deposited." << endl;
    }

    void withdraw(double amount)
    {
        if (balance - amount >= 0)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }
};

std::ostream &operator<<(std::ostream &os, const Account &acc)
{
    os << "Accout balance: " << acc.balance;
    return os;
}

class Saving_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &sav_acc);

protected:
    double int_rate;

public:
    Saving_Account(double amount = 0.0, double rate = 0.0) : Account{amount}, int_rate{rate}
    {
        cout << "Derived Counstructor" << endl;
    }

    void deposit(double amount)
    {
        amount += (amount * int_rate / 100);
        Account::deposit(amount);
        cout << "Balance Added with Interest Rate." << endl;
    }

    // withdraw is inherited
};

std::ostream &operator<<(std::ostream &os, const Saving_Account &sav_acc)
{
    os << "Accout balance: " << sav_acc.balance << " of Interest Rate: " << sav_acc.int_rate;
    return os;
}

int main()
{
    Account ac_1{5000.0};
    ac_1.deposit(6000.0);
    cout << ac_1 << endl;
    ac_1.withdraw(1000.0);
    cout << ac_1 << endl;

    Saving_Account sac_1{10000.0, 5.2};
    sac_1.deposit(2000.0);
    cout << sac_1 << endl;
    sac_1.withdraw(1000.0);
    cout << sac_1 << endl;

    Account *ac_2 = new Saving_Account{15000.0, 2.5};
    ac_2->deposit(3000.0);
    cout << *ac_2 << endl;

    return 0;
}