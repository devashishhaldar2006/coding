class Solution {
public:
    void helper(vector<int>& ans, int num, int x, int lo, int hi) {
        if (num>hi || x>9) return;
        if (num>=lo) ans.push_back(num);
        helper(ans, num*10+(x+1),x+1,lo,hi);
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for (int i=1;i<=9;i++) {
            helper(ans,i,i,low,high);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};