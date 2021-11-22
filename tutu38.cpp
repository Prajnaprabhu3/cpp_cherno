#include <iostream>
using namespace std;

using String = string;

class Entity
{
private:
    String m_Name;

public:
    Entity() : m_Name("Unknown") {}
    Entity(const String &name) : m_Name(name) {}

    const String &GetName() const { return m_Name; }
};

int main()
{
    Entity *e;
    {
        Entity entity = Entity("Prajna");
        cout << entity.GetName() << endl;
    }

    // if on heap
    Entity *e;
    {
        Entity *entity = new Entity("Prajna");
        e = entity;
        cout << entity->GetName() << endl;
        delete entity;
    }
}