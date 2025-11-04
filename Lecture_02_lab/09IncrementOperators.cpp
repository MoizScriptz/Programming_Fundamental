// Question 9: Exploring Increment Operators
// Task: Create a program that declares an integer variable x and initializes it to 10. First, print the value of x++. Then, on a new line, print the new value of x.

#include <iostream>
using namespace std;    
int main() {
    int x = 10;

    // Print the value of x before incrementing
    cout << "Value of x before incrementing (x++): " << x++ << endl;

    // Print the new value of x after incrementing
    cout << "New value of x after incrementing: " << x << endl;

    return 0;
}