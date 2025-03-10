#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
    private:
        string name; // name is a property of Animal
        string species; // species is a property of Animal
        int age; // age is a property of Animal

    public: 
        string getName(){ // getter returns the original type
            return this->name;
        } 

        string getSpecies(){ // getter returns the original type
            return this->species;
        } 

        int getAge(){ // getter returns the original type
            return this->age;
        } 

        void setName(string name){ // setter returns void
            this->name = name;
        } 
        void setSpecies(string species){ // setter returns void
            this->species = species;
        } 

        void setAge(int age){ // setter returns void
            this->age = age;
        } 

        Animal(string name, string species, int age) { // constructor that gets called on construction
            this->name = name;
            this->species = species;
            this->age = age;
        } 
};

#endif

// getters = returns the original type

// setters = returns void

// constructor = special member function of a class (automatically called when object of class is called)
    // (same name as class)
    // (no return type)

// :: = scope resolution operator (used to access members (variables or functions))

// this-> = accesses variables (*accessing* that *variable* and *assigning them*)

// default constructor = constructor without arguments 

// "takes two arguments"

// inheritance = "have one class that distributes all the functionality to everything else"

// "general Animal object that holds base information that every Animal object derives from"