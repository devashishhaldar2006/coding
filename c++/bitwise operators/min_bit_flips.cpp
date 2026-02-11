#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
//agr hum sare bits ko compare krkr ek number ko dusre mein chnge krna chhate h to hume xor leke dono k krna hoga kyuki xor different mein 1 deta h aur same bits mein 0 deta hai
using namespace std;
int count_bit_flip(int n){
	return __builtin_popcount(n);
}
int min_flip_bits(int x,int y){
	int flipped=x^y;
	return count_bit_flip(flipped);

}


int main() {
	cout << min_flip_bits(23,32) << endl;
	return 0;
}