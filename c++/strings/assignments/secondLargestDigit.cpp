#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main() {
    string s = "12415";
    int max = -1, smax = -1;

    for (char ch : s) {
        int digit = ch - '0';
        if (digit > max) {
            smax = max;
            max = digit;
        } else if (digit > smax && digit != max) {
            smax = digit;
        }
    }

    cout << "Second largest digit: " << smax << endl;
    return 0;
}
