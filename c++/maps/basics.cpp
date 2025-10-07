#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="deva";
    p1.second=15;
    m.insert(p1);
    pair<string,int> p2;
    p2.first="dipen";
    p2.second=26;
    m.insert(p2);
    // for(pair<string,int> x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    
    // for(auto x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    //insertion method-2

    m["om"]=19;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    m.erase("deva");
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<m.size();
}