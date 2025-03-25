#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="abcdef";
    // substr(starting index, length)
    cout<<s.substr(0)<<endl; // abcdef
    cout<<s.substr(1)<<endl; // bcdef
    cout<<s.substr(1,3)<<endl; // bcd (1-based index) 
    
}