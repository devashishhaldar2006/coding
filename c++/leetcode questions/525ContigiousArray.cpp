class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> sumIndex;
        sumIndex[0]=-1;
        int maxLen=0;
        int sum=0;

        for(int i=0;i<nums.size();i++) {
            sum+=(nums[i]==1) ? 1 : -1;
            if (sumIndex.find(sum)!=sumIndex.end()) {
                int len=i-sumIndex[sum];
                if (len>maxLen) maxLen = len;
            } else {
                sumIndex[sum] = i;
            }
        }
        return maxLen;
    }
};