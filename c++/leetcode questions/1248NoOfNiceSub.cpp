#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int numberOfSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    int i = 0, j = 0;      // Window pointers: i (left), j (right)
    int cnt = 0;           // Counts the number of valid sub-subarrays in current window
    int ans = 0;           // Final answer: total subarrays with exactly k odd numbers
    int odd = 0;           // Counts the number of odd numprwbers in the current window
    
    while (j < n) {
        // If current element a[j] is odd, increment odd count and reset cnt
        if (nums[j] % 2 != 0) {
            cnt = 0;
            odd++;
        }
        
        // Shrink from the left while the window has exactly k odd numbers
        while (i <= j && odd == k) {
            cnt++;                  // For each valid left pointer position, increment cnt
            if (nums[i++] % 2 != 0)    // If moving past an odd number, decrement odd count
                odd--;
        }
        
        ans += cnt;  // Add the count of valid sub-subarrays ending at j to answer
        j++;         // Expand the right pointer
        
    }
    return ans;
}
int main(){

}
