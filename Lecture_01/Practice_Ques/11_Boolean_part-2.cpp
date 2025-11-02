/*
Part-2
11.Boolean Example
    Declare:
    bool isRaining = false;
    Display:
    Is it raining? 0.
*/

#include <iostream>
using namespace std;

int main() {
    bool isRaining = false;

    cout << "Is it raining? ";
    if (isRaining)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}