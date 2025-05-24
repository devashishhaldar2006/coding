#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Print descending part
        for (int j = i; j >= 1; j--) {
            cout << (char)(64+j);
        }

        // Print ascending part
        for (int k = 2; k <= i; k++) {
            cout << (char)(64+k);
        }

        cout << endl;
    }

    return 0;
}
