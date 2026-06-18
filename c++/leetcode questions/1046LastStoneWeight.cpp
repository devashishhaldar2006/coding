class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto num:nums){
            pq.push(num);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int w=abs(y-x);
            if(w){
                pq.push(w);
            }
        }
        if(pq.size()==1) return pq.top();
        else return 0;
    }
};