#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="devashish haldar";
    int max=0;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        int count=0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
        }
    }
    int mx=max;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        int count=0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==max){
            cout<<c<<" "<<max<<endl;
            break;
        }
    }
}