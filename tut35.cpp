#include <iostream>

using namespace std;
// mutable is something that can be changes

class Entity
{
private:
    string m_Name;
    mutable int m_count = 0;

public:
    const string &GetName() const
    {
        return m_Name;
        m_count++;
    }
};

int main()
{
    const Entity e;
    e.GetName();

    int x = 8;
    auto f = [&]()
    {
        x++;
        cout << x << endl;
    }
};

f();