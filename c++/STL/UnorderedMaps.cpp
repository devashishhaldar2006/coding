#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>& m){
    cout<<m.size()<<endl;
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    //multimap<pair<int,int>, string>m;
    //keys are unique
    //in built hash-tables
    unordered_map<int,string> m;
    m[2]="deva";//0(1)
    m[3]="om";
    m[4]="dipen";
    m.insert({7,"dhruvi"});
    auto it=m.find(3);//O(1)
    if(it!=m.end()){
        m.erase(it);//O(1)
    }

    cout<<endl;
    print(m);
}