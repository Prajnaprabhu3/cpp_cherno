#include <iostream>
using namespace std;
extern int s;
// Static keyword

// Static keyword outside the class :
int main()
{
    static int s = 5;
    cout << s;
}

// cout << s;