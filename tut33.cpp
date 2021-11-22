#include <iostream>
using namespace std;
int main()
{
    const char *name = "Prajna";
    // The L indicates the string literal is made using while characters
    const wchar_t *name2 = L"Prabhu";

    const char16_t *name3 = u"Prajnf"; //2byte
    const char32_t *name4 = U"Prajnf"; //4byte

    cout << name << endl;
    cin.get();

    // difference between char and w_char :
}

// String literals are always stored in stack
