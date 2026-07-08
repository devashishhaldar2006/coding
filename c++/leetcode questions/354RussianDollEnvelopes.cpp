class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        int n=arr.size();
        vector<int> dp(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j][0]<arr[i][0] && arr[j][1]<arr[i][1]){
                    dp[i]=max(dp[i],dp[j]);
                }
            }
            dp[i]++;
        }
        return *max_element(dp.begin(),dp.end());
    }
};