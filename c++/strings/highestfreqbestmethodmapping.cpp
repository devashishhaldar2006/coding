#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="devashish haldar";
    vector<int> freq(26,0);
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ascii=(int)ch;
        freq[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(freq[i]>mx) mx=freq[i];
    }
    for(int i=0;i<26;i++){
        if(mx==freq[i]){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx<<endl;;
        }
    }
}