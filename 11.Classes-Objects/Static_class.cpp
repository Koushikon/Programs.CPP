// Static class member and static method
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Player
{
    static int num_player;
    string name;
    int health, xp;

public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
    ~Player();
    static int get_num_player();
};

int Player::num_player = 0;

Player::Player() : Player{"", 0, 0}
{
}

Player::Player(string name_val) : Player{name_val, 0, 0}
{
}

Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{
    ++num_player;
}

Player::~Player()
{
    --num_player;
}

int Player::get_num_player()
{
    return num_player;
}

void active_player()
{
    cout << "Active Player - " << Player::get_num_player() << "\n";
}

int main()
{
    Player player1{"player1"};
    Player player2{"player2", 77, 52};
    active_player();

    {
        Player player3{"player3"};
        Player player4{"player4"};
        active_player();
    }
    active_player();
    return 0;
}