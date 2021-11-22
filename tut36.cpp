#include <iostream>
using namespace std;

// initialize our class member function in the constructor
class Entity
{
private:
    string m_Name;

public
    Entity()
        : m_Name("Unknown")
    {
        // m_Name = "Unknown";
    }

    Entity(const string &name)
    {
        m_Name;
    }
    // string &GetName() sonst { return m_Name }
};

int main()
{
    Entity e0;
    cout << e0.GetName();
}