#include <iostream>
using namespace std;

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

// Creating Player as a subclass of Entity
// Now writing it the below manner , the Player will have all properties of Entity class
class Player : public Entity
{
public:
    const char *Name;
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }

    void PrintName()
    {
        cout << Name << endl;
    }
};

int main()
{
    Player player;
    player.Move(5, 5);
    player.X = 2;
    cin.get();
}