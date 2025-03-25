#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int arr[m][n]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    // Print the array in wave pattern
    cout << "The wave print of the array is: " << endl;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) { // Even-indexed rows
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        else { // Odd-indexed rows
            for (int j = n - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }
}