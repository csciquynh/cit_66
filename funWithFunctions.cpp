// February 9, 2025
/* Instructions: create a program that involves three distinct functions: getAnIntFromTheUser, compareTwoInts, and sumTwoInts
the program will demonstrate how functions can be used to break down a problem into smaller, manageable parts */ 
// Due: February 9 (Sunday)
#include <iostream>
using namespace std;

void getAnIntFromTheUser();
void compareTwoInts();
void sumTwoInts();

int main() {

    getAnIntFromTheUser();
    compareTwoInts();
    sumTwoInts();

    return 0;
}

void getAnIntFromTheUser(){
    int num;
    cout << "What's your favorite number?" << endl;
    cin >> num;
    cout << "Your favorite number, " << num << ", is pretty cool! \U0001F604\n\n";
}

void compareTwoInts(){
    int num1;
    int num2;
    cout << "What's your two favorite numbers?\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int multiplied = num1 * num2;
    cout << "Your two favorite numbers multiplied together is " << multiplied << "! \U0001F62F\n";
}

void sumTwoInts(){
    int num1;
    int num2;
    cout << "\nWhat's your two least favorite numbers?\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "The sum of your two least favorite numbers is " << sum << "! \U0001F631\n\n";
}