#include<iostream>
using namespace std;
int main(){
    char operation;
    int num01, num02, result;
    cout << " Welcome to Calculator " << endl;
    cout << "Enter first number: ";
    cin >> num01;
    cout << "Enter second number: ";
    cin >> num02;
    cout << "How to perform calculations: " << endl;
    cout << "1. Addition: + " << endl;
    cout << "2. Subtraction: - " << endl;
    cout << "3. Multiplication: * " << endl;    
    cout << "4. Division: / " << endl;
    cout << "Select an operation: ";
    cin >> operation;
    if(operation == '+'){
        result = num01 + num02;
        cout << "The sum is " << num01 << " and " << num02 << " : "<< result << endl;
    }
    else if(operation == '-'){
        result = num01 - num02;
        cout << "The Subtraction is " << num01 << " and " << num02 << " : "<< result << endl;
    }
    else if(operation == '*'){
        result = num01 * num02;
        cout << "The Multiplication is " << num01 << " and " << num02 << " : "<< result << endl;
    }
    else if(operation == '/'){
        if(num02 != 0){
            result = num01 / num02;
            cout << "The Division is " << num01 << " and " << num02 << " : "<< result << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }
    else{
        cout << "Invalid operation selected!" << endl;
    }


}