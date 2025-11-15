#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string calculate(string val1,string val2,char ch){
    string s="";
    s.push_back(ch);//change
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    string str="79+4*8/3-";
    stack<string> val;
    int i=0;
    while(i<str.size()){
        if(isdigit(str[i])){
            val.push(to_string(str[i]-'0'));
        }
        else{
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=calculate(val1,val2,str[i]);
            val.push(ans);
        }
        i++;
    }
    cout<<val.top();

}