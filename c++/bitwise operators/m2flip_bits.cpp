#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
//agar hum sare bits ko 1 bna ke xor le lenge n ke sath to hum bit flip kr skte h
using namespace std;
int max_power_of_two(int n) {
	n = n | (n >> 1);
	n = n | (n >> 2);
	n = n | (n >> 4);
	n = n | (n >> 8);
	n = n | (n >> 16);
	return (n + 1) >> 1; // Return correct power of 2
}

int flip_bits(int n) {
	if (n == 0) return 1;
	// Find number of bits in n
	int bits = log2(n) + 1;
	// Create mask of 1's of length equal to bits
	int mask = (1 << bits) - 1;
	// XOR with mask to flip bits
	return n ^ mask;
}

int main() {
	int n = 13;
	cout << flip_bits(n) << endl;
	return 0;
}