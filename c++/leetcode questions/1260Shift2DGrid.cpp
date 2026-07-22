class Solution {
public:
    void revPart(int a,int b,vector<int>& arr){
        int i=a;
        int j=b;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return;
    }
    void rotateArray(vector<int>& arr,int k){
        // 1 2 3 4 5
        // 5 4 3 2 1
        // 4 5 1 2 3 k=2
        int n=arr.size();
        k=k%n;
        revPart(0,n-1,arr);
        revPart(0,k-1,arr);
        revPart(k,n-1,arr);
        return;
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();            
        vector<int> v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
        }
        rotateArray(v,k);
        int l=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=v[l++];
            }
        }
        return grid;
    }
};