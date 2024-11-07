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
    // Overloaded Constructors
    Player();                                            // Default or No-args Contructor
    Player(string name_ini);                             // Single-args Constructor
    Player(string name_ini, int health_ini);             // 2-args Constructor
    Player(string name_ini, int health_ini, int xp_ini); // 3-args Constructor

    ~Player(); // Destructor
};

Player::Player()
{
    name = "none";
    health = 0;
    xp = 0;
}

Player::Player(string name_ini)
{
    name = name_ini;
    health = 0;
    xp = 0;
}

Player::Player(string name_ini, int health_ini)
{
    name = name_ini;
    health = health_ini;
    xp = 0;
}

Player::Player(string name_ini, int health_ini, int xp_ini)
{
    name = name_ini;
    health = health_ini;
    xp = xp_ini;
}

Player::~Player()
{
    cout << "Player Destructortructor called " << name << endl;
}

int main()
{
    // Player and Account class access
    {
        Player slayer;
    }
    cout << endl;
    {
        Player frank("Frank");
    }
    cout << endl;
    {
        Player jimmy("Jimmy", 75);
    }
    cout << endl;
    {
        Player villain("Villain", 107, 52);
    }
    cout << endl;

    Player *mary = new Player;

    delete mary; // Releasing the mary

    return 0;
}