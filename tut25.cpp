#include <iostream>
using namespace std;

class Entity
{
public:
    float X, Y;

    // void Init()
    // {
    //     X = 0.0f;
    //     Y = 0.0f;
    // }

    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }

    // constructor with parameters
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};

int main()
{
    // Entity e;

    // Constructor with parameter
    Entity e(10.0f, 5.05);

    // e.Init();

    e.Print(); //random stored values gets printed
    cin.get();
}

// Constructor is a speacial type of method with name as name of the class oe struct
