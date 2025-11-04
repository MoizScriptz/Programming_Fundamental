// Question 4: Creating ASCII Art
// Task: Write a program that uses characters to draw a simple pattern, like a triangle, on the screen.
// Example Output:
// *
// ***
// *****
// For Loop Syntax

#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i += 2) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
