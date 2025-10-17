class Solution {
public:
    bool isPowerOfThree(int n) {
        const int maxPowerOf3 = 1162261467; // 3^19
        return (n > 0) && (maxPowerOf3 % n == 0);
    }
};



class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<= 0) return false;
        while(n%3 == 0) {
            n=n/3;
        }
        return n == 1;
    }
};