class Solution {
public:
    int numRabbits(vector<int>& arr) {
        int cnt=0;
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int curr=arr[i]+1;
            if(m.find(curr)!=m.end()){
                m[curr]++;
                if(curr==m[curr]){
                    m.erase(curr);
                }
            }
            else{
                cnt+=curr;
                if(arr[i]==0) continue;
                m[curr]++;
            }
        }
        return cnt;
    }
};