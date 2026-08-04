bool cmp(vector<int>& a,vector<int>& b){
    return a[1]<b[1];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        vector<vector<int>> res;
        res.push_back(intervals[n-1]);
        for(int i=n-2;i>=0;i--){
            vector<int> currInterval=intervals[i];
            if(currInterval[1]>=res[res.size()-1][0]){
                res[res.size()-1][0]=min(currInterval[0],res[res.size()-1][0]);
                res[res.size()-1][1]=max(currInterval[1],res[res.size()-1][1]);
            }
            else res.push_back(intervals[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};   