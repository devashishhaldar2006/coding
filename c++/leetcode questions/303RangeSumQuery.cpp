class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        pre.resize(n);
        
        pre[0] = nums[0];
        for(int i = 1; i < n; i++) {
            pre[i] = pre[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return pre[right];
        return pre[right] - pre[left - 1];
    }
};