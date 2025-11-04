// Question 7: Understanding Operator Precedence
// Task: Write a program to calculate the result of the expression 10 + 5 * 2. Print the result to the screen. Then, in the same program, calculate and print the result of (10 + 5) * 2.

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 10;
    b = 5; 
    c = 2;
    cout<< "Result of 10 + 5 * 2: "<< a+b*c << endl;
    cout<< "Result of (10 + 5) * 2: "<< (a+b)*c << endl;

}