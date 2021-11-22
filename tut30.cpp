#include <iostream>
using namespace std;

// Visibility in C++
// 3 visibility modifiers Private, Protected, and public

class Entity
{
private:
    int X, Y;

public:
    Entity()
    {
        X = 0;
        Print();
    }
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;
        Print();
    }
};

int main()
{
    Entity e;
    e.Print();
}

// Protected is more visible than private but less than public. ENtity and all subclasses can acess it, but cant acess it through main
// Private- only that class can access that
// public- can be accessed by everyine

// Why and where visibility
// Vsibility is nothing to do with performance and things like that, its the basic style of code
