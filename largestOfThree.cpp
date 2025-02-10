// February 9 2025
/* Instructions: this program is designed to help you understand conditional statements in C++. 
your task is to write a program that asks the user for three integers, determines the largest among them 
using nested if statements, and outputs the largest integer */
// Due: February 9 (Sunday)
#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;
    int num3;

    cout << "Please input three numbers. \nEnter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    cout << "Enter your third number: ";
    cin >> num3;

    if(num1 < num2 && num3 < num2){
        cout << "\nYour largest number is: " << num2 << "! \U0001F929\n\n";
    } else if (num2 < num3 && num1 < num3){
        cout << "\nYour largest number is: " << num3 << "! \U0001F929\n\n";
    } else {
        cout << "\nYour largest number is: " << num1 << "! \U0001F929\n\n";
    }

    return 0;
}