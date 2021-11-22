#include <iostream>
using namespace std;
int main()
{
    int a = 25, b = 5;
    int *f1, *f2, q;
    f1 = &a;
    f2 = &b;
    q = f1 / *f2;
    cout << q;
}

// int main()
// {
//     int x[25];
//     x[0] = 10;
//     x[24] = 10;
//     cout << *x << endl;
//     cout << *(x + 24) + *(x + 0) << endl;
// }