#include<iostream>
#include<string>
//set bits matlb kitne 1 hai ek binary number mein
//x and x-1 me ek part ekdum same hoga aur ek part flipped hoga binary mein
//x and x-1 mein me x me last set bit(inclusive) se lekr last tk sab flipped hota hai
using namespace std;
int count_set_bits(int n){
  	return __builtin_popcount(n);
}
int count_set_bits2(int n){
	int count=0; 
	while(n>0){
		count++;
		n=(n&(n-1));
	}
	return count;
}
int main(){
	int n=13;
	cout<<count_set_bits(n)<<endl;
	cout<<count_set_bits2(n)<<endl;
	return 0;
}