#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "12415";
    int number = 0;

    for (char ch : s) {
        int digit = ch - '0';
        number = number * 10 + digit;
    }

    cout << "NUMBER IS: " << number << endl;
    return 0;
}
