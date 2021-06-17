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
    string name;
    int health, xp;

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
    Account frank_ac;
    Account jim_ac;

    Player franks;
    Player toms;

    Player players[]{franks, toms};

    vector<Player> player_vec{franks};
    player_vec.push_back(toms);

    Player *enemy{nullptr};
    enemy = new Player();

    delete enemy;

    return 0;
}