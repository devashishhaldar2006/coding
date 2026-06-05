class Solution {
public:
    int sumDigits(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mn=sumDigits(nums[0]);
        for(int i=0;i<n;i++){
            nums[i]=sumDigits(nums[i]);
            mn=min(mn,nums[i]);
        }

        return mn;
    }
};