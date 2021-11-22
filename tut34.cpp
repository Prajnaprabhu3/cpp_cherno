// const--> keepig something constant
#include <iostream>
using namespace std;

class Entity
{
private:
    int m_X, m_Y;

public:
    int GetX() const
    {
        return m_X;
    }
    void SetX(int x)
    {
        m_X = x;
    }
};

void PrintEntity(const Entity *e)
{
    cout << e.GetX();
}

const int MAX = 90;

const int b = 13;
const int *a = new int;

*a = &MAX;
a = (int *)&MAX;