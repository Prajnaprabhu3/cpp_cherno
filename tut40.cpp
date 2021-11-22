#include <iostream>
using namespace std;

// Implicit conversions -->without we explicitly typing

class Entity
{
private:
    string m_Name;
    int m_Age;

public:
    Entity(const string &name);
    :m_Name(name),m_AGe(-1){}
};

// Explicit keywords : It prevents the unexpected implicit conversions.Mailnly with constructors
