#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int calculate(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string str="(2+3)+2+6*4/8-3";
    cout<<(2+3)+2+6*4/8-3<<endl;
    stack<char> op;
    stack<int> val;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            val.push(str[i]-'0');
        }
        else{
            if(op.size()==0){
                op.push(str[i]);
            }
            else if(str[i]=='(') op.push(str[i]);
            else if(op.top()=='(') op.push(str[i]);
            else if(str[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=calculate(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prio(str[i])>prio(op.top()))
            {
                op.push(str[i]);
            }
            else{
                while(op.size() && prio(str[i])<=prio(op.top())){
                    // kaam -> val1 op val2
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=calculate(val1,val2,ch);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }
    while(op.size()){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=calculate(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}