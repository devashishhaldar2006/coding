#include<iostream>
using namespace std;

int main() {
    // Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13...
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    int a = 0, b = 1;
    // Print the first two terms if n is at least 1
    if (n >= 1) {
        cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }
    // Generate the rest of the sequence
    for (int i = 2; i < n; i++) {
        int nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }
}