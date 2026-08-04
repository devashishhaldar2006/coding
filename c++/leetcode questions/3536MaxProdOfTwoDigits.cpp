class Solution {
public:
    vector<int> arr;
    void digits(int n){
        while(n){
            arr.push_back(n%10);
            n/=10;
        }
        return;
    }
    int maxProduct(int n) {
        digits(n);
        sort(arr.begin(),arr.end());
        int m=arr.size();
        return arr[m-1]*arr[m-2];
    }
};