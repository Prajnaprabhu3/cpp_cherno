// Static for classes and structs in c++
#include <iostream>
using namespace std;

// static within a class means a thing.Means there will be only one instance of that variable

// struct Entity
// {

//      int x, y;

//     void Print()
//     {
//         cout << x << "," << y << endl;
//     }
// };
struct Entity
{

    static int x, y;

    static void Print()
    {
        cout << x << "," << y << endl;
    }
};

// int main()
// {
//     Entity e;
//     e.x = 2;
//     e.y = 3;

//     Entity e1 = {5, 8};

//     e.Print();
//     e1.Print();
//     cin.get();
// }

int Entity::x;
int Entity::y;
int main()
{
    Entity e;
    Entity::x = 2;
    Entity::y = 3;

    Entity e1;
    Entity::x = 5;
    Entity::y = 8;

    Entity::Print();
    Entity::Print();
    cin.get();
}

// If you are using the static keyword for the variables and function in the struc, then thr main code can be written in the way shown
// A static method does not have a static instance.
// You cannot access a non static variable within a static function
