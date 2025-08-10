#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
void print(map<int,string>& m){
    cout<<m.size()<<endl;
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    //keys are unique
    //in built trees
    map<int,string> m;
    m[2]="deva";//O(m.size * (log(n)))
    m[3]="om";
    m[4]="dipen";
    m.insert({7,"dhruvi"});
    auto it=m.find(3);//O(logn)//m.end dene pr segmentation fault
    // m.erase(it);
    if(it!=m.end()){
        m.erase(it);
    }

    // if(it==m.end()){
    //     cout<<"NO VALUE"<<endl;
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<endl;
    // map<int,string> :: iterator it;
    print(m);
}
