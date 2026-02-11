#include<iostream>
#include<string>
using namespace std;
//agr humare pass koi x<<y hai iska matlb yeh h ki x ki binary me y zero left se uthake right me laga do 
int binary_to_decimal(string &binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
      char ch=binary[i];
      int num=ch-'0';
      result=result+num*(1<<(n-i-1));//n-index-1 //2 ki power me nikal rhe
    }
    return result;
}

int main(){
    string str="001101";
    cout<<binary_to_decimal(str)<<endl;
    return 0;
}