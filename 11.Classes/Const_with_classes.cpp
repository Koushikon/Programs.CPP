#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player
{
private:
    string name{};
    int health{}, xp{};

public:
    void set_name(string name);
    string get_name() const;
    void compare_player(const Player &p) const;

    Player();
    Player(string name);
    Player(string nm, int hel, int x_p);
    Player(const Player &sources);
    ~Player();
};

Player::Player(string nm, int hel, int x_p) : name{nm}, health{hel}, xp{x_p}
{
    cout << "Three args constructor call"
         << "\n";
}

Player::Player() : Player{"", 0, 0}
{
    cout << "Default constructor call"
         << "\n";
}

Player::Player(string nm) : Player{nm, 0, 0}
{
    cout << "One args constructor call"
         << "\n";
}

Player::Player(const Player &sources) : Player{sources.name, sources.health, sources.xp}
{
    cout << "Copy constructor call"
         << "\n";
}

Player::~Player()
{
    cout << "Destructor call"
         << "\n";
}

void Player::set_name(string name)
{
    cout << "Inside set name"
         << "\n";
    this->name = name;
}

/*
with const keyword after the parameter list we can tell the compiler
that "get_name" and "compare_player" function won't change anything otherwise we'll get an error.
*/

string Player::get_name() const
{
    return this->name;
}

void Player::compare_player(const Player &p) const
{
    if (this == &p)
        cout << "Same object"
             << "\n";
    else
        cout << "Different objects"
             << "\n";
}

int main()
{
    Player player1{"Tom"};
    player1.set_name("Nickel");
    cout << "1 - " << player1.get_name() << "\n";

    cout << "\n";

    // player2 set to const object can't be changed
    const Player player2{"jerry", 90, 247};
    cout << "2 - " << player2.get_name() << "\n";
    // player2.set_name("Sins😁"); // Compiler error
    player2.compare_player(player2);

    cout << "\n";

    Player player3{player1};
    cout << "3 - " << player3.get_name() << "\n";
    player3.compare_player(player1);

    return 0;
}