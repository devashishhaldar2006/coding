#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {-5, 34, -7, 2, 47, 4, -6};
    int i = 0;
    int j = v.size() - 1;

    while (i < j) {
        if (v[i] >= 0) {
            i++;
        } else if (v[j] < 0) {
            j--;
        } else {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    for (int x : v) {
        cout << x << " ";
    }
}
