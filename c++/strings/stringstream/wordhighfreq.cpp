#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string s="deva is a     og. he likes kid and is a og goat";
    stringstream s1(s);
    string temp;
    vector<string> v;
    while(s1>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxcount=1;
    int count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(count,maxcount);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<"-"<<count<<endl;
        }
    }
}