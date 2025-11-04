// Question 10: Introduction to Relational Operators
// Task: Write a program that compares two numbers, 15 and 20, using the "less than" (<) and "equal to" (==) operators. Print the results of these comparisons directly to the screen.


#include <iostream>
using namespace std;
int main() {
    int num1 = 15;
    int num2 = 20;
    bool isLessThan = num1 < num2;
    bool isEqualTo = num1 == num2;
    cout <<"Is "  <<num1 << " less than " << num2 << " : " << isLessThan << endl;
    cout <<"Is " <<num1 << " equal to  " << num2 << " : " << isEqualTo << endl;
    return 0;
}