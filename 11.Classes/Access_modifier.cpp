#include <iostream>
#include <string>

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

    bool is_down();
};

class Account
{
private:
    string name{"default"};
    double balance{};

public:
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit: " << balance << endl;
    }

    void withdraw(double amount)
    {
        balance -= amount;
        cout << "Withdraw: " << balance << endl;
    }
};

int main()
{
    Player franks;
    // Access Private Objects
    // franks.name = "Frank"; // Compiler error
    // franks.health = 1000; // Compiler error
    // Access Protected objects
    // franks.xp = 32; // Compiler error
    // Access Public Objects
    franks.talk("Just for show.");

    Player *enemy = new Player;
    // Access Private Objects
    // enemy->name = 1500; // Compiler error
    // Access Protected objects
    // enemy->xp = 32; // Compiler error
    // Access Public Objects
    enemy->talk("I will kill you");

    // Release the memory
    delete enemy;

    cout << endl;

    Account frank_ac;
    // Access Private Objects
    // frank_ac.balance = 1000000.00; // Compiler error
    // Access Public Objects
    frank_ac.deposit(400000.00);
    frank_ac.withdraw(400.00);

    cout << endl;

    Account *mary_ac = new Account;
    // Access Private Objects
    // mary_ac->balance = 100000.00; // Compiler error
    // Access Public Objects
    mary_ac->withdraw(1500.00);

    // Release the memory
    delete mary_ac;

    return 0;
}