class Solution {
public:
    int count(vector<vector<int>>& matrix,int mid){
        int n=matrix.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        } 
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row=matrix.size();
        int col=matrix[0].size();
        int lo=matrix[0][0];
        int hi=matrix[row-1][col-1];
        int ans =-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int cnt=count(matrix,mid);
            if(cnt>=k){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};