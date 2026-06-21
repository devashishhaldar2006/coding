class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            arr[i]=((arr[i]%k)+k)%k;
            m[arr[i]]++;
        }
        for(auto x:m) {
            if(x.first==0) continue;
            int y=k-x.first;
            if(x.first==y) {  
                if(x.second%2!=0) return false;
            }
            else {
                if(m.find(y)==m.end()) return false;
                if(x.second != m[y]) return false;
            }
        }

        return true;
    }
};