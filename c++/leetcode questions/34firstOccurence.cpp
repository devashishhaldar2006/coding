#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> result(2, -1);
    int n = nums.size();
    
    // Find first occurrence
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] >= target) hi = mid - 1;
        else lo = mid + 1;
        if (nums[mid] == target) result[0] = mid;
    }
    
    // Reset and find last occurrence
    lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] <= target) lo = mid + 1;
        else hi = mid - 1;
        if (nums[mid] == target) result[1] = mid;
    }
    return result;
}
int main(){
    vector<int> v = {1, 2, 2, 2, 3, 3, 3, 8, 8};
    searchRange(v,8);
}