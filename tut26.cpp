#include <iostream>
using namespace std;
// Destructors
// Runs when object gets destroyed

#include <iostream>
using namespace std;

class Entity
{
public:
    float X, Y;

    Entity()
    {
        X = 0.0f;
        Y = 0.0f;

        cout << "Created Entity" << endl;
    }

    ~Entity()
    {
        cout << "Destreoyed Entity" << endl;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    // Entity e;
    // e.Print();

    // e.Print();

    Function();
    cin.get();
}

// Constructor is a speacial type of method with name as name of the class oe struct
