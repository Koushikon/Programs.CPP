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
    Player();                                           // Default or No-args Contructor
    Player(string name_ini);                            // Single-args Constructor
    Player(string name_ini, int health_ini);            // 2-args Constructor
    Player(string name_ini, int health_ini, int xp_ini) // 3-args Constructor
    {
        cout << "3-args Contructor called." << endl;
    }

    ~Player(); // Destructor

    void set_name(string name_val);
};

class Account
{
private:
    string name;
    double balance;

public:
    Account();                         // Default or No-args Contructor
    Account(string name_ini);          // Single-args Constructor
    Account(string name_ini, int bal); // 2-args Constructor

    ~Account()
    {
        cout << "Account Destructortructor called." << endl;
    }
};

Player::Player()
{
    cout << "Player Default or No-args Contructor called." << endl;
}

Account::Account()
{
    cout << "Account Default or No-args Contructor called." << endl;
}

Player::Player(string name_ini)
{
    cout << "Player Single-args Contructor called." << endl;
}

Account::Account(string name_ini)
{
    cout << "Account Single-args Contructor called." << endl;
}

Player::Player(string name_ini, int health_ini)
{
    cout << "Player 2-args Contructor called." << endl;
}

Account::Account(string name_ini, int bal)
{
    cout << "Account 2-args Contructor called." << endl;
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
        Account frank_ac("Frank Acc.");
    }
    cout << endl;
    {
        Player frank("Frank");
        frank.set_name("Frank");
        Player hero("Hero", 100);
        hero.set_name("Hero");
        Player villain("Villain", 107, 52);
        villain.set_name("Villain");
    }
    cout << endl;

    Player *mary = new Player;
    mary->set_name("Mary");
    Account *bobiee = new Account("Bobiee", 15000.00);

    delete mary;   // Releasing the mary
    delete bobiee; // Releasing the bobiee

    return 0;
}