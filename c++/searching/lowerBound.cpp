#include <iostream>
#include <vector>
#include <algorithm> // for std::lower_bound
using namespace std;

// Manual implementation of lower_bound
int lowerBoundManual(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size();
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return (lo < nums.size() ? nums[lo] : -1); 
}

int main() {
    vector<int> v = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    // Using manual lower_bound
    cout << "Manual lower_bound for 3: " << lowerBoundManual(v, 3) << endl;
    cout << "Manual lower_bound for 5: " << lowerBoundManual(v, 5) << endl;
    cout << "Manual lower_bound for 25: " << lowerBoundManual(v, 25) << endl;

    // Using std::lower_bound
    auto it1 = lower_bound(v.begin(), v.end(), 3);
    auto it2 = lower_bound(v.begin(), v.end(), 5);
    auto it3 = lower_bound(v.begin(), v.end(), 25);

    cout << "std::lower_bound for 3: " << (it1 != v.end() ? *it1 : -1) << endl;
    cout << "std::lower_bound for 5: " << (it2 != v.end() ? *it2 : -1) << endl;
    cout << "std::lower_bound for 25: " << (it3 != v.end() ? *it3 : -1) << endl;

    return 0;
}