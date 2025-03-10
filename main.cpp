#include "Animal.h"
#include "Bear.h"
#include "Hyena.h"
#include "Lion.h"
#include "Tiger.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>
using namespace std;

// Objective:
// develop your skills in C++ control structures, data structures (Array, Vector, Map),
// file I/O, and basic OOP design through a "C++ Zoo Practice" application. this project
// involves processing file information, managing animal data, and generating a report.

// Background:
// the zoo has received a new list of animals. organize this information, process it, and 
// prepare a report on the animals, including their specific enclosures.

// Important:
// this program is crucial for preparing for your major midterm project.

// Requirements:

// 1.) Class Design:
    // create an Animal class with properties like name (string), age (int), and species (string),
    // including a constructor, getters, and setters.
    // develop four subclasses: Hyena, Lion, Tiger, and Bear, each with unique attributes or methods.

// 2.) Data Structures:
    // use std::vector for storing animal instances and std::map for counting species.

// 3.) File I/O
    // read animal details from arrivingAnimals.txt and output a report to newAnimals.txt,
    // categorizing animals by species with names, ages, and total counts.

// 4.) Control Structures and OOP Design: 
    // implement loops, conditionals, encapsulation, inheritance, and polymorphism in C++ as specified.

// Instructions: 
// 1.) implement the Animal class and its subclasses.
// 2.) process instances from the input file using C++ data structures.
// 3.) generate a report in the specified format.

// Submission Guidelines:
// 1.) submit source code with comments explaining your logic.
// 2.) include a report on your design choices and implementations.

// this assignment is designed to solidify your understanding of crucial C++ concepts
// through a practical application, setting a strong foundation for more complex projects ahead.

int main() {

    ifstream arrivingAnimalText("arrivingAnimals.txt"); // reading from the "arrivingAnimals.txt" text file

    string line;
    string value = "";
    vector<string> text;
    vector<Animal*> animalVector;
    int age;
    string species;
    
    while(getline(arrivingAnimalText, line)){ // using the getline() function to read the file line by line
        // cout << line << "\n"; // outputting the text (entire line) from the "arrivingAnimals.txt" file
        int i = 0;
        string character = "";
        while(true){ // iterating through each line in the file character by character
            if(character == " " || character == ","){ // if we hit a character with a *space*...
                text.push_back(value); // then we're going to *add* (pushing) our value (e.g. 4) (passed in) into the text vector
                value = ""; // (overwrite/reset value back to an empty string)
                if(character == ","){ // edge case
                    break; // our end condition (loop until we hit a comma)
                }
            } else { // if not a space, concatenate the character to "value"
                value += character; // iterating character by character and ***concatenating*** to a string called *value*
            } 
            character = line[i];
            i++;
        }
        // for(string s : text){ // reading the text
        //     cout << s << "\n";

        // }
        age = stoi(text[0]); // converting text to an integer using stoi()
        species = text.back(); // .back() = getting the last value in a vector

        // reading name, species, and age
        if(species == "hyena"){
            animalVector.push_back(new Hyena("Kamari", species, age)); // adding a subclass to a parent/base class vector 
        }

        if(species == "lion"){
            animalVector.push_back(new Lion("Mufasa", species, age)); // adding a subclass to a parent/base class vector 
        }

        if(species == "bear"){
            animalVector.push_back(new Bear("Pooh", species, age)); // adding a subclass to a parent/base class vector 
        }

        if(species == "tiger"){
            animalVector.push_back(new Tiger("Tigger", species, age)); // adding a subclass to a parent/base class vector 
        }

        text.clear(); // clearing the vector to empty 
    }
    
    arrivingAnimalText.close(); // saving the "arrivingAnimals.txt" text file

    map<string, int> animalCount = { // string = species (key), int = the animal count (value)
        {"hyena", 0}, 
        {"lion", 0}, 
        {"bear", 0}, 
        {"tiger", 0}
    }; 

    map<string, string> outputMap = { // string = species (key), empty string (value)
        {"hyena", ""}, 
        {"lion", ""}, 
        {"bear", ""}, 
        {"tiger", ""}
    };

    for(Animal* a : animalVector){ // iterating through the animalVector
        outputMap[a->getSpecies()] += a->getName() + ", " + to_string(a->getAge()) + "\n"; // retrieving each string by the key
        animalCount[a->getSpecies()] += 1; // species is the key (incrementing the count by 1)
    }

    string output = "Animal Report: \n\n";
    vector<string> speciesNames = {"hyena", "lion", "bear", "tiger"}; // created a vector/array to hold the animals 

    for(string s : speciesNames){ // looping outputs for each animal
        output += s + ":\n";
        output += outputMap[s];
        output += "Count: " + to_string(animalCount[s]) + "\n\n";
    }

    ofstream newAnimalText("newAnimals.txt"); // creating "newAnimals.txt" text file
    
    newAnimalText << output;
    
    newAnimalText.close(); // saving the "newAnimals.txt" text file

    return 0;
}

// "input file"

// "comma-separated values"

// *file parsing* (*parsing* with *spaces*)

// empty = empty string ("")

// "focus on the condition"

// stoi() = *string to integer* conversion function

// "file tree"