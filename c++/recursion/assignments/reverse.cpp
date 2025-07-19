#include <iostream>
using namespace std;

void printReverse(int arr[],int index) {
    // Base case: if index is negative, return
    if(index<0) {
        return;
    }
    // Print current element
    cout<<arr[index]<<" ";
    // Recursive call for previous element
    printReverse(arr,index - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements in reverse order: ";
    printReverse(arr, n - 1);
    cout<<endl;
}
