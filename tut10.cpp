// #include --> will have all header files

#include <iostream>
using namespace std;

// say there is a function as below
int Log(int a)
{
    cout << "Hello";
    cout << a;
}

// If we need to use this function in any other file, we have to first write #include "Log.h" in the file we want to use it