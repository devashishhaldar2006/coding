class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        pre[0]=0;
        for(int i=1;i<n;i++){
            pre[i]=nums[i-1]+pre[i-1];
        }
        vector<int> suf(n);
        suf[n-1]=0;
        for(int i=n-2;i>=0;i--){
            suf[i]=nums[i+1]+suf[i+1];
        }
        for(int i=0;i<n;i++){
            pre[i]=abs(pre[i]-suf[i]);
        }
        return pre;
    }
};