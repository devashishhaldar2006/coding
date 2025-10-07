#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    m[1]=30;
    m[2]=40;
    m[3]=50;
    m[4]=60;
    //sorting in terms of key
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;;
    } 
}