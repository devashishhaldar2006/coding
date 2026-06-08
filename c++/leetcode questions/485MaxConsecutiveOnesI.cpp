class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int maxLen=INT_MIN,len=0;
        while(i<n && j<n){
            if(nums[j]==1) j++;
            else{
                len=j-i;
                maxLen=max(maxLen,len);
                j++;
                i=j;
            }
        }
        len=j-i;
        maxLen=max(maxLen,len);
        return maxLen;
    }
};