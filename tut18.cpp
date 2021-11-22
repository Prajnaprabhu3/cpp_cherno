#include <iostream>
using namespace std;

class Player
{
    // by default thid is private
public:
    int x, y;
    int speed;

    void Move(Player &player, int xa, int ya)
    {
        x += xa * player.speed;
        y += ya * player.speed;
    }
};

int main()
{
    // variables made from class name are object
    Player player;

    player.Move(1, 1);
}