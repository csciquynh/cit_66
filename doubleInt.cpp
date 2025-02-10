// January 18, 2025
// Instructions: get an int from the user and double it
// Due: January 26 (Sunday)
#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "What's your favorite number?" << endl;
    cin >> num;

    int doubled = num * 2;
    
    cout << "Your favorite number when doubled becomes: " << doubled << "!" << endl;

    return 0;
}
