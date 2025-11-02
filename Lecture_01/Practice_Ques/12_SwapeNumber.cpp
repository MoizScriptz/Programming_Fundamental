/*
12.Swap Two Numbers (Without Logic Yet)
    Declare two variables:
    int a = 5, b = 10;
    Just display:
    Before swapping: a = 5, b = 10
    After swapping: a = 10, b = 5
    (You can assign swapped values manually — no logic  required.)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a=" << a << ", b=" << b << endl;

// Manual swapping  
        a = 10; 
        b = 5;
        
// Logics for swapping
    // a = a + b; // a now becomes 15
    // b = a - b; // b becomes 5
    // a = a - b; // a becomes 10


    cout << "After swapping: a=" << a << ", b=" << b << endl;
    return 0;
}