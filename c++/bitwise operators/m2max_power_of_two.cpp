#include<iostream>
#include<string>
//set bits matlb kitne 1 hai ek binary number mein
//max power of 2 just less than n
//agar max power of 2 just greater than n ke liye 2 se multiply kr dena temp ko
//agar kabhi bits mein 0 ko 1 krna ho aur 1 ko 1 hee rehne dena ho to OR kr dena
using namespace std;
int max_power_of_two(int n){
	n=n | (n>>1);
	n=n | (n>>2);
	n=n | (n>>4);
	n=n | (n>>8);
	n=n | (n>>16);
	return (n+1)>>1;
}

int main(){
	int n=13;
	cout<<max_power_of_two(n)<<endl;
	return 0;
}