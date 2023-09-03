#include <iostream>
#include <string>

using std::cout;
using std::string;

class Player;

class Board
{
public:
    void get_board(Player &);
};

class Player
{
    friend class Game; // Friend class Game
    string name;
    int xp, health;

public:
    // Standalone Friend function
    friend void display_player_info(Player &p);

    // Other classes Friend function
    friend void Board::get_board(Player &p);

    Player(string name_, int xp_, int health_);
    ~Player() {}

    void get_player()
    {
        cout << "Name: " << name
             << "\nXP " << xp
             << "\nHealth " << health << '\n';
    }
};

Player::Player(string name_, int xp_, int health_) : name{name_}, xp{xp_}, health{health_}
{
}

void Board::get_board(Player &p)
{
    cout << "Name: " << p.name
         << "\nXP " << p.xp
         << "\nHealth " << p.health << '\n';
}

class Game
{
public:
    void get_avatar(Player &p)
    {
        cout << "Name: " << p.name
             << "\nXP " << p.xp
             << "\nHealth " << p.health << '\n';
    }
};

void display_player_info(Player &p)
{
    cout << "Player name: " << p.name
         << "\nPlayer XP: " << p.xp
         << "\nPlayer Health: " << p.health << "\n";
}

int main()
{
    Player p1{"John", 15, 150};
    // display_player_info(p1);
    cout << "Player class get function\n";
    p1.get_player();

    cout << "\nStandalone Friend function\n";
    display_player_info(p1);

    cout << "\nGame Friend Class\n";
    Game game1;
    game1.get_avatar(p1);

    cout << "\nBoard class Friend function\n";
    Board bd1;
    bd1.get_board(p1);
    return 0;
}