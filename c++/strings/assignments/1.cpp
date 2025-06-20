#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter length of the string: ";
    cin >> n;

    string str;
    cout << "Enter the string: ";
    cin >> str;

    // Validate the length
    if (str.length() != n) {
        cout << "Error: Length of string doesn't match the entered value." << endl;
        return 1;
    }

    // Replace all characters at odd indices with '#'
    for (int i = 1; i < n; i += 2) {
        str[i] = '#';
    }

    cout << "Updated string: " << str << endl;

    return 0;
}
