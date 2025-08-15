#include <bits/stdc++.h>
using namespace std;
void print(set<string>& s){
    cout<<s.size()<<endl;
    for(auto value: s){
        cout<<value<<endl;
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("abc");//O(logN)
    s.insert("efe");
    s.insert("rte");
    auto it=s.find("abc");//O(logN)
    if(it!=s.end()){
        s.erase(it);
    }
    print(s);
}