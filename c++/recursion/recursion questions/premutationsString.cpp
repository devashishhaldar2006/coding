#include<iostream>
#include<string>
using namespace std;
void permutations(string ans,string original){
	if(original==""){
		cout<<ans<<endl;
		return;
	}
	for(int i=0;i<original.length();i++){
		char ch=original[0];
		string left=original.substr(0,i);
		string right=original.substr(i+1);
		permutations(ans+ch,left+right);
	}
}
int main(){
	string str="abcd";
	permutations("",str);
	// cout<<str.substr(1,2)<<endl;//(a,b) a is starting idx -> inclusive idx
}