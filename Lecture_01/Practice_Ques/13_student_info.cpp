/*
13.Display User Info (Static Values)
    Declare and display:
    Name: Sara
    Roll No: 23
    Department: Computer Science
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name ;
    int rollNo ;
    string dept ;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Department: ";
    cin >> dept;

    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Department: " << dept;
    return 0;
}