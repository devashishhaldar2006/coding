#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="devashish haldar";
    string s1="haldar devashish";
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1){
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }    
}