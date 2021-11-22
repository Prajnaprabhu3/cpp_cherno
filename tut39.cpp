#include <iostream>
using namespace std;
// new keyword - is to allocate memory on heap specifically

int main()
{
    int a = 2;
    int *b = new int[50] //50*4=200bytes

        // Entity *e = new Entity[50];
        Entity *e = new Entity();                 //this calls the entity class
    Entity *e = (Entity *)malloc(sizeof(Entity)); //this just allocates a memeory for the Entity
    free(e);
    delete e;
}