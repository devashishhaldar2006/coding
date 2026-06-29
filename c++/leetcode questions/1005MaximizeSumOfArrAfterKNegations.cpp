class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int> > pq(nums.begin(),nums.end());
        int sum=0;
        for(auto num:nums) sum+=num;
        while(k--){
            int val=pq.top();
            if(!val){
                break;
            }
            pq.pop();
            sum-=val;
            sum+=(-val);
            pq.push(-val);
        }
        return sum;
    }
};