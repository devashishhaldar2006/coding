class Solution {
public:
    int revNumber(int n){
        int rev=0;
        while(n){
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
            s.insert(revNumber(nums[i]));
        }
        return s.size();
    }
};

