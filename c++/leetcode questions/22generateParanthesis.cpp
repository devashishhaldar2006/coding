#include<iostream>
#include<vector>
#include<string>
using namespace std;
//valid paranthesis
//agr opening bracket closing bracket ke agr barabar hai y fir zyda hai to hum closing bracket append krva skte h(strictly)
void generate(string s,int open,int close,int n){
    //base case
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) generate(s+'(',open+1,close,n);
    if(close<open) generate(s+')',open,close+1,n);

}
int main() {
    int n=3;
    generate("",0,0,n);
}