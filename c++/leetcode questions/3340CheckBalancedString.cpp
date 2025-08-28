#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
bool isBalanced(string s) {
    int n=s.length();
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0) even+=s[i]-'0';
        else odd+=s[i]-'0';
    }
    if(even==odd) return true;
    else return false;
}
int main(){
    
}