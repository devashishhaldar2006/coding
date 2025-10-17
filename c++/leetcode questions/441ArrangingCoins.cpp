class Solution {
public:
    int arrangeCoins(int n) {
        return (sqrt((double)8*n+1)-1)/2;
    }
};