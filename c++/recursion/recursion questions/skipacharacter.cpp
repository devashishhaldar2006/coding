#include<iostream>
#include<string>
using namespace std;
void skipchar(string ans,string original,int idx){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') skipchar(ans,original,idx+1);
    else skipchar(ans+ch,original,idx+1);
}
int main(){
    string s="deva is caal";
    string m="";
    skipchar(m,s,0);
}