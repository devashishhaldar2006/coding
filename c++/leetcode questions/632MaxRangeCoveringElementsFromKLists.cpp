class Solution {
public:
    typedef pair<int,pair<int,int>> pr;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pr,vector<pr>,greater<pr>> pq;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }
        int mn=pq.top().first;
        int start=mn,end=mx;
        while(true){
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            if(col==nums[row].size()-1) break;
            pq.push({nums[row][col+1],{row,col+1}});
            mx=max(mx,nums[row][col+1]);
            mn=pq.top().first;
            if(mx-mn<end-start){
                start=mn;
                end=mx;
            }
        }
        return {start,end};
    }
};