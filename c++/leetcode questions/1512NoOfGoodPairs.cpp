class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (int x : nums) {
            ans += mp[x];
            mp[x]++;
        }
        return ans;
    }
};