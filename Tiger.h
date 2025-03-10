#ifndef TIGER_H
#define TIGER_H
#include "Animal.h"
using namespace std;

class Tiger : public Animal { // Tiger is an instance of Animal (Tiger scopes into Animal)
    public:
        Tiger(string name, string species, int age) : Animal(name, species, age) {} // Tiger constructor that scopes into the Animal base class

};

#endif

// : = scope operator