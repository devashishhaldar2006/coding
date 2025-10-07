class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int operations=0;
        int i=0;
        int j=n-1;
         while (i<j) {
            int sum=nums[i] + nums[j];
            if (sum == k) {
                operations++;
                i++;
                j--;
            }
            else if(sum<k) {
                i++; 
            }
            else {
                j--;
            }
        }
        return operations;
    }
};







class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int operations=0;

        for(auto ele:nums) {
            int rem=k-ele;
            auto it=m.find(rem);
            if(it!= m.end() && it->second>0) {
                operations++;       // Pair found
                it->second--;       // Decrease frequency of complement
                if (it->second == 0) {
                    m.erase(it);
                }
            }
            else {
                m[ele]++;
            }
        }
        return operations;
    }
};