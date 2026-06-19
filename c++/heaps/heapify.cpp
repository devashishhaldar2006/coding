#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void heapify(vector<int>& arr, int i) {
    int n = arr.size();
    while(true) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;
        if(left < n && arr[left] < arr[smallest])
            smallest = left;

        if(right < n && arr[right] < arr[smallest])
            smallest = right;

        if(smallest == i)
            break;

        swap(arr[i], arr[smallest]);
        i = smallest;
    }
}

void display(vector<int>& arr){
    for(int x : arr)
        cout << x << " ";
}

int main() {
    vector<int> v = {-12,-4,6,-1,16,24};
    int n = v.size();
    for(int i = n/2 - 1; i >= 0; i--) {
        heapify(v, i);
    }
    display(v);
}