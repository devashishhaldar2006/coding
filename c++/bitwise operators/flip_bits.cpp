#include<iostream>
#include<string>
//agar hum sare bits ko 1 bna ke xor le lenge n ke sath to hum bit flip kr skte h
using namespace std;
int flip_bits(int n){
    int temp=n;
	n=n | (n>>1);
	n=n | (n>>2);
	n=n | (n>>4);
	n=n | (n>>8);
	n=n | (n>>16);
    return n^temp;
}
int main(){
	int n=13;
	cout<<flip_bits(n)<<endl;
	return 0;
}