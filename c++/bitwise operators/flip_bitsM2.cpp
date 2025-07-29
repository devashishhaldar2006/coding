#include <iostream>
using namespace std;

// Returns the highest power of two less than or equal to n
int maxPowerOfTwo(int n) {
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n + 1) >> 1;
}

// Flips all bits of n up to the highest bit set in n
int flip_bits(int n) {
    int temp = n;
    int mask = maxPowerOfTwo(n) * 2 - 1;  // Creates mask like 00011111 for 5 bits set
    return mask ^ temp;  // XOR flips the bits of n in those positions
}

int main() {
    int n = 23;  // binary 10111
    cout << flip_bits(n) << endl;  // Output: 8 (binary 01000)
    return 0;
}
