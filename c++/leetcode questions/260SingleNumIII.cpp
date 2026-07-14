class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long n=nums.size();
        long long xr=0;
        for(long long i=0;i<n;i++){
            xr^=nums[i];
        }
        long long mask=(xr&(xr-1))^xr;
        long long b1=0;
        long long b2=0;
        for(long long i=0;i<n;i++){
            if((nums[i]&mask)==0) b2^=nums[i];
            else b1^=nums[i];
        }
        return {(int)b1,(int)b2};
    }
};