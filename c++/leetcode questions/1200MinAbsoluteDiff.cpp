class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n=arr.size();
        int i=0,j=1;
        int minDiff=INT_MAX;;
        while(i<n && j<n){
            int diff=arr[j]-arr[i];
            if(diff<minDiff){
                minDiff=diff;
            }
            i++;
            j++;
        }
        i=0;
        j=1;
        while(i<n && j<n){
            int diff=arr[j]-arr[i];
            if(diff==minDiff){
                vector<int> v;
                v.push_back(arr[i]);
                v.push_back(arr[j]);
                ans.push_back(v);
            }
            i++;
            j++;
        }
        return ans;
    }
};