#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string decimal_to_binary(int n){
	string result="";
	while(n>0){
		if(n%2==0){
			result="0"+result;
		}
		else{
			result="1"+result;
		}
		n=n/2;//n>>1;dono same hai
	}
	return result;
}
int main(){
	int n=27;
	cout<<decimal_to_binary(n)<<endl;
	return 0;
}