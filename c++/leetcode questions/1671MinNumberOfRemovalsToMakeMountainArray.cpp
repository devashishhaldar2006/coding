class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp1(n,0);
        vector<int> dp2(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp1[i]=max(dp1[i],dp1[j]);
                }
            }
            dp1[i]++;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]){
                    dp2[i]=max(dp2[i],dp2[j]);
                }
            }
            dp2[i]++;
        }
        int mx=0;
        for(int i=0;i<n;i++){
            if(dp1[i]>1 && dp2[i]>1){
                int len=dp1[i]+dp2[i]-1;
                mx=max(len,mx);
            }
        }
        if(mx<3) return 0;
        return n-mx;
    }
};