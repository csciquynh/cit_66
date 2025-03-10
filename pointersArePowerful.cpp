// February 22, 2025
// 1.) pointer basics

/* Instructions: 
1.) write a program that declares an integer variable a and a pointer p to an integer
2.) assign the address of a to p
3.) print the address stored in p and the value of a using p
4.) change the value of a using p and print the new value of a */

// understanding pointers in C++ and linked lists

/* Objective: to enhance students' understanding of pointers, 
memory addresses, and pointer arithmetic in C++ */

/* Description: in this assignment, you will explore the fundamental
concepts of pointers in C++. you will write programs that demonstrate the use of pointers,
including pointer initialization, dereferencing, and pointer arithmetic */

// Due: February 23 (Sunday)
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int* p = &a;

    cout << "The memory address stored in \"p\" is " << p << ".\n";
    cout << "The value of \"a\" using \"p\" is " << *p << ".\n";

    *p = 20;

    cout << "The new value of \"a\" using \"p\" is now " << *p << ".\n\n";

    return 0;
}