class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(m==1 && n==1){
           return matrix[0][0]==target ? true:false;
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v.push_back(matrix[i][j]);
            }
        }
        int lo=0;
        int hi=v.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(v[mid]==target){
                return true;
            }
            else if(target>v[mid]){
                lo=mid+1;
            }
            else hi=mid-1;
        }
        return false;
    }
};







class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        if(m==0) return false;
        int n=matrix[0].size();
        int lo=0,hi=m*n-1;
        while (lo<=hi) {
            int mid=lo+(hi-lo)/2;
            int mid_value=matrix[mid/n][mid%n];
            if (mid_value==target) {
                return true;
            }
            else if(mid_value<target) {
                lo=mid+1;
            }
            else {
                hi=mid-1;
            }
        }

        return false;
    }
};
