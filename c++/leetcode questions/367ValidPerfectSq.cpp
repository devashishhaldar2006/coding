class Solution {
public:
    bool isPerfectSquare(long long num) {
        if(num==1) return true;
        long long lo=1;
        long long hi=num/2;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(mid*mid==num) return true;
            else if(mid*mid>num) {
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return false;
    }
};