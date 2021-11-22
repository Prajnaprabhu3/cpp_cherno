#include <iostream>
using namespace std;

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
    s_Speed = s_Level > 5 ? 10 : 5;

    string rank = s_Level > 10 ? "Master" : "Beginner";

    // nested ternary operator
    s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
    cin.get();
}