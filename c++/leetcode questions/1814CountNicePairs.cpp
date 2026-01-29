class Solution {
public:
    int revNumber(int n){
        int ans=0;
        while(n){
            int rem=n%10;
            ans=ans*10+rem;
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-revNumber(nums[i]);
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                cnt=cnt%1000000007;
                cnt+=m[nums[i]];
                m[nums[i]]++;
            }
            else m[nums[i]]++;
        }
        return cnt%1000000007;
        



    }
};