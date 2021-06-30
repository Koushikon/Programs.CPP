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
    Player(string name_ini = "None", int health_ini = 0, int xp_ini = 0); // 3-args Constructor
    Player(Player &sources);

    string get_name();
    int get_health();
    int get_xp();

    ~Player(); // Destructor
};

Player::Player(string name_ini, int health_ini, int xp_ini)
    : name{name_ini}, health{health_ini}, xp{xp_ini}
{
}

Player::Player(Player &sources)
    : Player{sources.name, sources.health, sources.xp}
{
}

string Player::get_name()
{
    return name;
}

int Player::get_health()
{
    return health;
}

int Player::get_xp()
{
    return xp;
}

Player::~Player()
{
    cout << "Destructortructor called " << name << endl;
}

void display_player(Player p)
{
    cout << "Name: " << p.get_name() << endl
         << "Health: " << p.get_health() << endl
         << "XP: " << p.get_xp() << endl;
}

int main()
{
    {
        Player frank("Frank");
        // Constructing an Object from another object
        Player users{frank};
    }
    cout << endl;
    {
        Player jimmy("Villain", 107, 52);
        display_player(jimmy);
    }
    cout << endl;

    Player *mary = new Player;
    display_player(*mary);
    delete mary; // Releasing the mary

    return 0;
}