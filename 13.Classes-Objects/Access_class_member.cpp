#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player
{
public:
    string name{"default"};
    int health, xp;

    void talk(string says)
    {
        cout << name << " says " << says << endl;
    }

    bool is_down();
};

class Account
{
public:
    string name{"default"};
    double balance{};

    void deposit(double amount)
    {
        balance += amount;
        cout << "In Deposit" << endl;
    }

    void withdraw(double amount)
    {
        balance -= amount;
        cout << "In Withdraw" << endl;
    }
};

int main()
{
    Account frank_ac;
    frank_ac.name = "Jimmy";
    frank_ac.balance = 1000000.00;
    frank_ac.deposit(400000.00);
    frank_ac.withdraw(400.00);

    cout << endl;

    Player franks;
    franks.name = "Frank";
    franks.health = 1000;
    franks.xp = 32;
    franks.talk("Just for show.");

    cout << endl;

    Player *enemy = new Player;
    (*enemy).name = "Toby"; // Do it like this (*instance_name).member
    enemy->health = 1000;
    (*enemy).xp = 32;
    enemy->talk("I will kill you"); // Do it like this instance_name->member

    // Release the memory
    delete enemy;

    return 0;
}