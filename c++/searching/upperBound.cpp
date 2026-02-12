#include <iostream>
#include <vector>
#include <algorithm> // for std::lower_bound, std::upper_bound
using namespace std;

// Manual implementation of upper_bound (first element > target)
int upperBoundManual(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size();
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] <= target) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return (lo < nums.size() ? nums[lo] : -1);
}

int main() {
    vector<int> v = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    cout << "Manual upper_bound for 3: " << upperBoundManual(v, 3) << endl; // 4
    cout << "Manual upper_bound for 5: " << upperBoundManual(v, 5) << endl; // 9
    cout << "Manual upper_bound for 25: " << upperBoundManual(v, 25) << endl; // -1

    // Using std::lower_bound and std::upper_bound
    auto it2 = upper_bound(v.begin(), v.end(), 3);

    auto it4 = upper_bound(v.begin(), v.end(), 5);

    auto it6 = upper_bound(v.begin(), v.end(), 25);

    cout << "std::upper_bound for 3: " << (it2 != v.end() ? *it2 : -1) << endl;

    cout << "std::upper_bound for 5: " << (it4 != v.end() ? *it4 : -1) << endl;

    cout << "std::upper_bound for 25: " << (it6 != v.end() ? *it6 : -1) << endl;
}