class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        return (n | (1<<k));
    }
};
