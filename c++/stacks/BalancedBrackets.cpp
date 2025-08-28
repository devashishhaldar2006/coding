#include <iostream>
#include <vector>
#include <stack>
using namespace std;
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