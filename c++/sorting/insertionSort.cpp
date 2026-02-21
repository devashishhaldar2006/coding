#include <iostream>
#include <string>
#include <vector>
using namespace std;
// O(n2) worst case
// O(n2) avg case
// O(n) best case
// insertion sort is a stable sort
// total number of swaps=total no of operations=(n*(n-1))/2
int main()
{
    int arr[] = {1, 25, 1, 6, 3, 21, 4242, 5, 63, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i];
    }
    for (int ele : v)
    {
        cout << ele << " ";
    }
    // insertion sort algo
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && v[j] < v[j - 1])
        {
            swap(v[j], v[j - 1]);
            j--;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}