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
    Player(string name_ini = "None", int health_ini = 0, int xp_ini = 0); // Constructor wih Default values

    ~Player(); // Destructor
};

Player::Player(string name_ini, int health_ini, int xp_ini)
    : name{name_ini}, health{health_ini}, xp{xp_ini}
{
}

Player::~Player()
{
    cout << "Player Destructortructor called " << name << endl;
}

int main()
{
    // Player and Account class access
    Player slayer;
    Player frank("Frank");
    Player jimmy("Jimmy", 75);
    Player villain("Villain", 107, 52);
    cout << endl;

    Player *mary = new Player;
    delete mary; // Releasing the mary

    return 0;
}