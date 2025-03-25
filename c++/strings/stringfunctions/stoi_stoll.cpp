#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string d="239424";
    int x=stoi(d);//String to Integer
    cout<<x+1<<endl;
    string s=to_string(x+1);
    cout<<s<<endl;;
    string k="323976234473243249";
    long long m=stoll(k);//String to Long Long
    cout<<m+1; 
}