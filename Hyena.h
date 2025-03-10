#ifndef HYENA_H
#define HYENA_H
#include "Animal.h"
using namespace std;

class Hyena : public Animal { // Hyena is an instance of Animal (Hyena scopes into Animal)
    public:
        Hyena(string name, string species, int age) : Animal(name, species, age) {}
    
};

#endif

// : = scope operator