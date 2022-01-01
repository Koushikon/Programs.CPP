#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player
{
private:
    string name;
    int health, xp;

public:
    Player(); // Default or No-args Contructor

    ~Player(); // Destructor

    void set_name(string name_val);
};

class Account
{
private:
    string name;
    double balance;

public:
    Account() // Default or No-args Contructor
    {
        name = "Null Account";
        balance = 0.00;
    }

    ~Account()
    {
        cout << "Account Destructortructor called. " << name << endl;
    }
};

Player::Player()
{
    name = "None";
    health = 0;
    xp = 0;
}

Player::~Player()
{
    cout << "Player Destructortructor called. " << name << endl;
}

void Player::set_name(string name_val)
{
    name = name_val;
}

int main()
{
    // Player and Account class access
    {
        Player slayer;
        slayer.set_name("Slayer");
        Account john_ac;
    }
    cout << endl;

    Player *mary = new Player;
    mary->set_name("Mary");
    Account *bobiee = new Account;

    delete mary;   // Releasing the mary
    delete bobiee; // Releasing the bobiee

    return 0;
}