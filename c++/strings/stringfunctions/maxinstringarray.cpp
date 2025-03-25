#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s1="123";
    string s2="0012912";
    string s3="12333";
    vector<string> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    int mx=0;
    int u=-1;
    string ch;
    for(int i=0;i<v.size();i++){
        int k=stoi(v[i]);
        if(k>mx){
            mx=k;
            u=i;
            ch=v[i];
        }
    }
    cout<<u<<endl;
    cout<<ch;
    // for(int j=0;j<v.size();j++){
    //     if(stoi(v[j])==mx){

    //         cout<<j;
    //     }
    // }
    
}