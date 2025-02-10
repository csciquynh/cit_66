// January 18, 2025
// Instructions: get an int from the user and triple it
// Due: January 26 (Sunday)
#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "What's your favorite number?" << endl;
    cin >> num;

    int tripled = num * 3;
    
    cout << "Your favorite number when tripled becomes: " << tripled << "!" << endl;

    return 0;
}
