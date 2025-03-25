#include<iostream>
using namespace std;
int main() {
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;
    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    int matrix[m][n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int minr = 0, maxr = m - 1, minc = 0, maxc = n - 1;

    while(minr <= maxr && minc <= maxc) {
        // Right
        for(int j = minc; j <= maxc; j++) {
            cout << matrix[minr][j] << " ";
        }
        minr++;

        if(minr > maxr || minc > maxc) break;

        // Down
        for(int k = minr; k <= maxr; k++) {
            cout << matrix[k][maxc] << " ";
        }
        maxc--;

        if(minr > maxr || minc > maxc) break;

        // Left
        for(int l = maxc; l >= minc; l--) {
            cout << matrix[maxr][l] << " ";
        }
        maxr--;

        if(minr > maxr || minc > maxc) break;

        // Up
        for(int g = maxr; g >= minr; g--) {
            cout << matrix[g][minc] << " ";
        }
        minc++;
    }
}
