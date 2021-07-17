#include <iostream>
#include <string>

using std::boolalpha;
using std::cout;
using std::endl;
using std::string;

class Player
{
private:
    string name{"default"};
    int health;

protected:
    int xp;

public:
    void talk(string says)
    {
        cout << name << " says " << says << endl;
    }

    bool is_down()
    {
        if (xp == 0)
            return true;
        return false;
    }
};

class Account
{
private:
    string name{"default"};
    double balance{};

public:
    void set_balance(double bal);
    double get_balance();
    void deposit(double amount);
    double withdraw(double amount);
};

void Account::set_balance(double bal)
{
    balance = bal;
}

double Account::get_balance()
{
    return balance;
}

void Account::deposit(double amount)
{
    balance += amount;
    cout << "Deposit: " << balance << endl;
}

double Account::withdraw(double amount)
{
    if (amount > balance)
    {
        cout << "Balance insufficient" << endl;
        return 0;
    }
    balance -= amount;
    cout << "The amount " << amount << " successfully withdrawal." << endl;
    return 0;
}

int main()
{
    // Player Class access
    Player franks;

    franks.talk("Just for show.");
    cout << boolalpha;
    cout << "Franks down is " << franks.is_down() << endl;

    Player *enemy = new Player;
    enemy->talk("I will kill you");

    delete enemy; // Releasing the enemy
    cout << endl;

    // Account Class access
    Account frank_ac;

    frank_ac.set_balance(40000);
    cout << "Current balance is " << frank_ac.get_balance() << endl;

    frank_ac.deposit(400.00);
    frank_ac.withdraw(500.00);
    cout << "Current balance is " << frank_ac.get_balance() << endl;
    cout << endl;

    Account *mary_ac = new Account;

    mary_ac->set_balance(500);
    cout << "Current balance is " << mary_ac->get_balance() << endl;
    mary_ac->withdraw(1500.00);
    mary_ac->withdraw(150.00);
    cout << "Current balance is " << mary_ac->get_balance() << endl;

    delete mary_ac; // Releasing the mary_ac

    return 0;
}