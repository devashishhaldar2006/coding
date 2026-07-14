class NumArray {
public:
    vector<int> st;
    int n;
    void buildTree(vector<int>& arr,int i,int lo,int hi){
        if(lo==hi){
            st[i]=arr[lo];
            return;
        }
        int mid=(lo+hi)/2;
        buildTree(arr,2*i+1,lo,mid);
        buildTree(arr,2*i+2,mid+1,hi);
        st[i]=st[2*i+1]+st[2*i+2];
    }
    int getMax(int i,int lo,int hi,int l,int r){
        if(l>hi || r<lo) return 0;
        if(l<=lo && hi<=r) return st[i];
        int mid=(lo+hi)/2;
        int left=getMax(2*i+1,lo,mid,l,r);
        int right=getMax(2*i+2,mid+1,hi,l,r);
        return left + right;
    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        st.resize(4*n);
        buildTree(nums,0,0,n-1);
    }
    void updateST(int i,int lo,int hi,int index,int val){
        if(lo==hi){
            st[i]=val;
            return;
        }
        int mid=(lo+hi)/2;
        if(index<=mid) updateST(2*i+1,lo,mid,index,val);
        else updateST(2*i+2,mid+1,hi,index,val);
        st[i]=st[2*i+1]+st[2*i+2];
    }
    void update(int index, int val) {
        updateST(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return getMax(0,0,n-1,left,right);
    }
};