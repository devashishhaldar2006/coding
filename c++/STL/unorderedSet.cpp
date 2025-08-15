#include <bits/stdc++.h>
using namespace std;
//multiset can also be used
void print(unordered_set<string>& s){
    cout<<s.size()<<endl;
    for(auto value: s){
        cout<<value<<endl;
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}
int main(){
    unordered_set<string> s;
    // multisetset<string> s;
    s.insert("abc");//O(1)
    s.insert("efe");
    s.insert("rte");
    auto it=s.find("abc");//O(1)
    if(it!=s.end()){
        s.erase(it);
    }
    print(s);
}