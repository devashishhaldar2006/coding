class FindSumPairs {
public:
    vector<int> nums1;
    vector<int> nums2;
    int n=nums1.size();
    int m=nums2.size();
    unordered_map<int,int> m1;
    unordered_map<int,int> m2;
    
    FindSumPairs(vector<int>& nums1, vector<int>& nums2): nums1(nums1), nums2(nums2) {
        for(int i=0;i<n;i++){
            m1[nums1[i]]++;    
        }
        for(int i=0;i<m;i++){
            m2[nums2[i]]++;    
        }
    }
    
    void add(int index, int val) {
        m2[nums2[index]]--;
        if(m2[nums2[index]] == 0)
            m2.erase(nums2[index]);
        nums2[index] += val;
        m2[nums2[index]]++;
    }
    
    int count(int tot) {
        int c=0;
        for(auto itr:m1) {
            int x=tot-itr.first;
            if(m2.find(x)!=m2.end())
                c += itr.second * m2[x];
        }
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */