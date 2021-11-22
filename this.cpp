#include <iostream>
using namespace std;

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        // Entity *e = this;
        this->x = x;
        this->y = y;

        // x -= x;
    }

    int GetX() const
    {
    }
};

int main()
{
    cin.get();
}