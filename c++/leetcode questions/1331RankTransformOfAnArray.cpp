class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans=arr;
        unordered_map<int,int> m;
        sort(ans.begin(),ans.end());
        int x=1;
        for(int i=0;i<=n-1;i++){
            if(i==n-1){ 
                m[ans[i]]=x;
            }
            else if(ans[i]==ans[i+1]){
                m[ans[i]]=x;
            }
            else{
                m[ans[i]]=x++;
            }
        }
        for(int i=0;i<n;i++){
            if(m.find(arr[i])!=m.end()){
                arr[i]=m[arr[i]];
            }
        }
        return arr;
    }
};