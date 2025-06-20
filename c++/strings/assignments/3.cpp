#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string t=s;
    reverse(s.begin(),s.end());
    bool flag=true;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]) {
            flag=false;
            break;}
    }
    if(flag==0) cout<<"not palindrome";
    else cout<<"palindrome";
}
