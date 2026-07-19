class RangeFreqQuery {
public:
    vector<unordered_map<int,int>> st;
    int n;
    unordered_map<int,int> addMaps(unordered_map<int,int>& mp1,unordered_map<int,int>& mp2){
        unordered_map<int,int> mp;
        for(auto x : mp1){
            mp.insert(x);
        }
        for(auto x: mp2){
            int key=x.first;
            int freq=x.second;
            if(mp.find(key)==mp.end()) mp.insert(x);
            else mp[key]+=freq;
        }
        return mp;
    }
    void buildTree(vector<int>& arr,int i,int lo,int hi){
        if(lo==hi){
            st[i][arr[lo]]=1;
            return;
        }
        int mid=(lo+hi)/2;
        buildTree(arr,2*i+1,lo,mid);
        buildTree(arr,2*i+2,mid+1,hi);
        st[i]=addMaps(st[2*i+1],st[2*i+2]);
    }
    int getFreq(int i,int lo,int hi,int& l,int& r,int& key){
        if(l>hi or r<lo) return 0;
        if(lo>=l and hi<=r){
            if(st[i].find(key)==st[i].end()) return 0;
            else return st[i][key];
        }
        int mid=(lo+hi)/2;
        int leftAns=getFreq(2*i+1,lo,mid,l,r,key);
        int rightAns=getFreq(2*i+2,mid+1,hi,l,r,key);
        return leftAns + rightAns;
    }

    RangeFreqQuery(vector<int>& arr) {
        n=arr.size();
        st.resize(4*n);
        buildTree(arr,0,0,n-1);
    }
    
    int query(int left, int right, int value) {
        return getFreq(0,0,n-1,left,right,value);
    }
};