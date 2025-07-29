#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    if(target<nums[0]) return 0;
    if(target>nums[n-1]) return (n);
    
    int lo=0,hi=n-1;
    int idx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(target==nums[mid]) return mid;
        else if(target<nums[mid]) {
            hi=mid-1;
            idx=mid;
        }
        else {
            lo=mid+1;
        }
        
    }
    return idx;
}
int main(){

}