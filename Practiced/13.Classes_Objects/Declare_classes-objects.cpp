#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Player
{
    // Attribute
    string name{"Acc"};
    int health{100}, xp{40};

    // Methods
    void talk(string);
    bool is_dead();
};

class Account
{
    string name{"Bin"};
    double balance{};

    bool deposit(double amount);
    bool withdraw(double amount);
};

int main()
{
    // Debug this program with different breakpoints.
    Player franks;
    Player toms;

    Account frank_ac;
    Account jim_ac;

    Player players[]{frank_account, Jim_account};

    vector<Player> player_vec{frank_account};
    player_vec.push_back(Jim_account);

    Player *enemy{nullptr};
    enemy = new Player();

    delete enemy;

    return 0;
}