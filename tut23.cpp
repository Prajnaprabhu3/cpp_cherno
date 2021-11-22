#include <iostream>
using namespace std;

// Local Static in C++
void Function()
{
    //  int i = 0;
    // i++;
    // cout << i << endl; //prints 1 everytime
    // because every time i variable is created and set to 0,so increments to 1
    static int i = 0;
    i++;
    cout << i << endl;
}

class Singleton
{
private:
    static Singleton *s_Instance;

public:
    static Singleton &Get()
    {
        return *s_Instance;
    }

    void Hello()
    {
    }
};

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();
    Function();
}