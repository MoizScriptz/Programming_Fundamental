// Question 8: Using the Modulus Operator
// Task: Write a program that finds the remainder when 17 is divided by 4. Print the result in a clear format.

#include <iostream>
using namespace std;
int main(){
    int dividend = 17;
    int divisor = 4;
    int remainder = dividend % divisor;

    cout << "The remainder when " << dividend << " is divided by " << divisor << " is: " << remainder << endl;
    return 0;
}