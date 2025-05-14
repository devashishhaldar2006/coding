#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
int searchRange(vector<int>& nums) {
    vector<int> result(2, -1);
    int n = nums.size();
    // Find first occurrence
    int ans=-1;
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == mid) lo = mid + 1;
        else {
            ans=mid;
            hi=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {0, 1, 2, 4, 5, 7, 8};
    cout<<searchRange(v);
}