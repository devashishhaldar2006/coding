class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        return (x-1)*(y-1);
    }
};