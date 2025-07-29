#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
    int n=nums.size();
    vector<int> pre(n);
    pre[0]=nums[0];
    for(int i=1;i<n;i++) pre[i]=pre[i-1]+nums[i];
    for(int i=0;i<n;i++){
        int leftSum=(i == 0) ? 0 : pre[i - 1];
        int rightSum=pre[n-1]-nums[i]-leftSum;
        if(leftSum==rightSum){
            return i;
        }
        
    }
    return -1;
}
// int pivotIndex(vector<int>& nums) {
//     int totalSum = 0;
//     for(int num : nums) {
//         totalSum += num;         // Calculate total sum of all elements
//     }

//     int leftSum = 0;
//     for(int i = 0; i < nums.size(); i++) {
//         // rightSum can be deduced as totalSum - leftSum - nums[i]
//         int rightSum = totalSum - leftSum - nums[i];

//         if(leftSum == rightSum) {
//             return i;            // Found the pivot index
//         }

//         leftSum += nums[i];      // Update leftSum for next iteration
//     }

//     return -1; // No pivot index found
// }

int main(){
    
}
