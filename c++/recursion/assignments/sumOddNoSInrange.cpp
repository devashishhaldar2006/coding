#include<iostream>
using namespace std;

int sumOfOdds(int a, int b) {
    // Base case: if a > b, return 0
    if (a > b) {
        return 0;
    }
    // If a is even, start from next odd number
    if (a % 2 == 0) {
        a++;
    }
    // Base case: if a > b after adjustment, return 0
    if (a > b) {
        return 0;
    }
    
    // Add current odd number and recursively call for next odd number
    return a + sumOfOdds(a + 2, b);
}

int main() {
    int a, b;
    
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;
    
    // Ensure a <= b for proper range
    if (a > b) {
        swap(a, b);
    }
    
    int result = sumOfOdds(a, b);
    cout << "Sum of odd numbers between " << a << " and " << b << " is: " << result << endl;
    
    return 0;
}
