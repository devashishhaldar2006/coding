#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
long long countSubarrays(vector<int>& nums, long long k) {
    long long n=nums.size();
    long long count=0;
    long long i=0,j=0,total=0;
    while(j<n) {
        total+=nums[j];
        // Shrink the window while the average is not less than k
        while (i<=j && total* (j - i + 1)>=k) {
            total-=nums[i];
            i++;
        }
        // All subarrays ending at j, starting from i to j, are valid
        count+=(j - i + 1);
        j++;
    }
    return count;
}
int main(){

}
