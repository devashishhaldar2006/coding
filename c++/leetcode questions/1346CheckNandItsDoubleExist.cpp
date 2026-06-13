class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(m.find(2*arr[i])!=m.end() &&
               m[2*arr[i]] != i) return true;
        }
        return false;
    }
};