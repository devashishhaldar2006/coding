#include <iostream>
#include <string>
using namespace std;
//used in classes too
//classes are very similar to functions
// Function overloading based on number of parameters
int add(int a, int b) {
    cout << "Adding two integers: ";
    return a + b;
}

int add(int a, int b, int c) {
    cout << "Adding three integers: ";
    return a + b + c;
}

// Function overloading based on parameter types
double add(double a, double b) {
    cout << "Adding two doubles: ";
    return a + b;
}

float add(float a, float b) {
    cout << "Adding two floats: ";
    return a + b;
}

// Function overloading with mixed types
double add(int a, double b) {
    cout << "Adding int and double: ";
    return a + b;
}

int main() {
    cout << "=== BASIC FUNCTION OVERLOADING ===" << endl;
    
    cout << add(5, 3) << endl;          // Calls add(int, int)
    cout << add(5, 3, 2) << endl;       // Calls add(int, int, int)
    cout << add(5.5, 3.2) << endl;      // Calls add(double, double)
    cout << add(5.5f, 3.2f) << endl;    // Calls add(float, float)
    cout << add(5, 3.2) << endl;        // Calls add(int, double)
    
    return 0;
}
