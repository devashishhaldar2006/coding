#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int calculate(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string str="79+4*8-3";
    stack<int> val;
    int i=0;
    while(i<str.size()){
        if(isdigit(str[i])){
            val.push(str[i]-'0');
        }
        else{
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=calculate(val1,val2,str[i]);
            val.push(ans);
        }
        i++;
    }
    cout<<val.top();

}