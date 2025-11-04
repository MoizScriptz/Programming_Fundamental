// Question 2: Displaying Information on Multiple Lines
// Task: Write a program that displays your name, class, and roll number on three separate lines.

#include<iostream>
using namespace std;
int main (){
    string name, Class;
    int roll_number;
    // Input details
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your class: ";
    getline(cin, Class);    
    cout << "Enter your roll number: ";
    cin >> roll_number;

    // Display details on separate lines
    cout << "Name: " << name << endl;
    cout << "Class: " << Class << endl;
    cout << "Roll Number: " << roll_number << endl;
    return 0;

    
}