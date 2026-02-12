#include <iostream>
#include <vector>
#include <stack>
using namespace std;
/*
Function to check if the given string has balanced brackets or not.

The function takes a string as input and returns true if the brackets are balanced, false otherwise.

The function works by iterating over the string and pushing every opening bracket it encounters onto a stack. When it encounters a closing bracket, it checks if the stack is empty. If it is, it returns false. Otherwise, it pops the top element from the stack. At the end of the iteration, if the stack is empty, it returns true. Otherwise, it returns false.

Time complexity: O(n) where n is the length of the string.
Space complexity: O(n) for the stack.
*/
bool isValid(string s) {
    int n=s.length();
    if(n%2!=0) return false;
    stack <char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push('(');
        }
        else if(s[i]==')' && st.size()==0){
            return false;
        }
        else{
            st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){

}