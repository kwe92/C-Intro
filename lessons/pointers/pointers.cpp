#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// Pointers
// - A variable that stores a memory address as a value

int main()
{
    string antiHero = "Killua"; // a hero variable of type string

    // The type of the pointer has to match the type of the variable yoy are working with
    string *ptr = &antiHero;

    cout << "Anti-Hero: " << antiHero << endl;

    cout << "Anti-Hero Pointer in Memory: " << &antiHero << endl;

    return 0;
}