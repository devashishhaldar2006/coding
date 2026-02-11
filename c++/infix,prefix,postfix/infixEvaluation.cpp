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
    string str="2+6*4/8-3";
    stack<char> op;
    stack<int> val;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
            val.push(str[i]-'0');
        }
        else{
            // If the stack is empty or the precedence of the current operator is greater than the precedence of the top of the stack, push the current operator onto the stack.
            if(op.size()==0 || prio(str[i])>prio(op.top())){
                op.push(str[i]);
            }
            else{
                // While the stack is not empty and the precedence of the current operator is less than or equal to the precedence of the top of the stack, pop the top of the stack, calculate the result of the top two values in the stack and the popped operator, and push the result back onto the stack.
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
                // Push the current operator onto the stack.
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