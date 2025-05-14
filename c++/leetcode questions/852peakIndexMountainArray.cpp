#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
//mountain array
int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    // Find first occurrence
    int lo = 1, hi = n - 2;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid]>arr[mid+1]) hi=mid-1;
        else lo=mid+1;
    }
    return hi;

}
int main(){
    vector<int> v = {0, 1, 2, 4, 3, 1, 0};
    cout<<peakIndexInMountainArray(v);
}