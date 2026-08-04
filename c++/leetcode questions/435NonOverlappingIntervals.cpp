bool cmp(vector<int>& a,vector<int>& b){
    return a[0]<b[0];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        int ans=0;
        int lastInterval=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<lastInterval){
                ans++;
                lastInterval=min(lastInterval,intervals[i][1]);
            }
            else lastInterval=intervals[i][1];
        }
        return ans;
    }
};