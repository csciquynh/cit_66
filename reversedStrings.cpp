// February 8, 2025
/* Instructions: create a simple program that takes a user's input string and reverses it
for example: if the user inputs "hello," the program will ouput "olleh" */
// Due: February 9 (Sunday)
#include <iostream> 
#include <algorithm>
using namespace std;

int main() {

    string color;
    cout << "What's your favorite color?" << endl;
    getline(cin, color);
    reverse(color.begin(), color.end());

    cout << "Your favorite color in reverse order is " << color << "! \U0001F626" << endl;

    return 0;
}

// cout << "Your favorite color in reverse order is " << color[6] << color[5] << color[4] << color[3] << color[2] << color[1] << color[0] << endl;