// Pointer is just a integer stores address

#include <iostream>
using namespace std;

int main()
{
    int var = 8;
    // void *ptr = 0; //memory address 0 is not valid
    // void *ptr = nullptr; //null pointer
    int *ptr = &var;
    cin.get();
    cout << var << *ptr;
}