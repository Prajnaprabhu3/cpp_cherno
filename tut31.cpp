#include <iostream>
using namespace std;

// Arrays in C++

// class Entity

int main()
{
    int example[5];
    int *ptr = example;
    example[0] = 34;

    example[2] = 4;
    *((char *)ptr + 8) = 6; //the above can be written this way using pointers
    // Since each integer in 4byte in storage space

    // Creating array on stack
    int *another = new int[5];

    // This array is created on  heap, so is deleted only when we do it
    delete[] another;

    cout
        << example[0] << endl;
    cout << example[2] << endl;

    cin.get();
}