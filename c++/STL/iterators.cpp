#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    vector<int> v={2,3,5,6,7};
    print(v);
    cout<<endl;
    vector<int> ::iterator it=v.begin();
    // cout<<(*it)<<endl;
    // cout<<(*(it+1))<<endl;
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    }

    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator itr;
    for(itr=v_p.begin();itr!=v_p.end();++itr){
        // cout<<(*itr).first<<" "<<(*itr).second<<endl;
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
