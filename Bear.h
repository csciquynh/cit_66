#ifndef BEAR_H
#define BEAR_H
#include "Animal.h"
using namespace std;

class Bear : public Animal { // Bear is an instance of Animal (Bear scopes into Animal)
    public:
        Bear(string name, string species, int age) : Animal(name, species, age) {}

};

#endif

// : = scope operator

// "Animal" is the "base class"

// *define* the *data type* in the *subclass*, do not define the data type in the base class