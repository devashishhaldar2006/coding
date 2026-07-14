class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr=nums;
    }
    
    int sumRange(int left, int right) {
        int n=arr.size();
        vector<int> pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        if(left==0) return pre[right];
        return pre[right]-pre[left-1];
    }
};

