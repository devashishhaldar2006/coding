class Solution {
public:
    int helper(int n){
        int prod=1;
        while(n){
            int rem=n%10;
            prod*=rem;
            n/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(n<=101){
            if(helper(n)%t==0) return n;
            n=n+1;
        }
        return 100;
    }
};