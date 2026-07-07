class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        if (a[0] == b[0]) return a[1] > b[1];
        else  return a[0] < b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        int count=0;
        int maxEnd=0;
        for (auto it : arr) {
            if (it[1] > maxEnd) {
                count++;
                maxEnd = it[1];
            }
        }
        return count;
    }
};