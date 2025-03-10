#ifndef LION_H
#define LION_H
#include "Animal.h"
using namespace std;

class Lion : public Animal { // Lion is an instance of Animal (Lion scopes into Animal)
    public:
        Lion(string name, string species, int age) : Animal(name, species, age) {}
    
};

#endif

// : = scope operator