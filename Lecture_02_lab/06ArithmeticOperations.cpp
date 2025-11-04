// Question 6: Basic Arithmetic Operations
// Task: Write a C++ program that declares two integer variables, a and b. Assign the 
// value 20 to a and 5 to b. Then, calculate and print the results of their sum, difference, product, and quotient.

# include<iostream>
using namespace std;

int main(){
    int a,b;
    a = 20;
    b = 5;

    cout<< "The Sum "<< a<< " and " << b << " is: "<< a+b << endl;
    cout<< "The  Difference"<< a<< " and " << b << " is: "<< a-b << endl;
    cout<< "The  Product"<< a<< " and " << b << " is: "<< a*b << endl;
    cout<< "The  Quotient"<< a<< " and " << b << " is: "<< a/b << endl;

}