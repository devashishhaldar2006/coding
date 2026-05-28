class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int> v(i+1);
            ans.push_back(v);
        }
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(i==rowIndex) return ans[i];
                if(j==0 || j==i){
                    ans[i][j]=1;
                }
                else ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        for(int i=0;i<ans.size();i++){
            if(i==rowIndex){
                vector<int> v;
                for(int j=0;j<=i;j++){
                    v.push_back(ans[i][j]);
                }
                return v;
            }
        }
        return {};
    }
};