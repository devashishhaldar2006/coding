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
    string str="-/*+79483";
    stack<int> val;
    int i=str.size()-1;
    while(i>=0){
        if(isdigit(str[i])){
            val.push(str[i]-'0');
        }
        else{
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int ans=calculate(val1,val2,str[i]);
            val.push(ans);
        }
        i--;
    }
    cout<<val.top();

}