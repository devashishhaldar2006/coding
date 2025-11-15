#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string calculate(string val1,string val2,char ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int main(){
    string str="-/*+79483";
    stack<string> val;
    int i=str.size()-1;
    while(i>=0){
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
        i--;
    }
    cout<<val.top();

}