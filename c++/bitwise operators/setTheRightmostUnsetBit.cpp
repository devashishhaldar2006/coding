class Solution {
  public:
    int setBit(int n) {
        // code here
        return n | n + 1;
    }
};