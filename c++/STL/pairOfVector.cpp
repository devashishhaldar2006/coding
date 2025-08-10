#include<iostream>
#include<vector>
using namespace std;
void print(vector<pair<int,int>>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl; 
}
int main(){
    // vector<pair<int,int>> v={{1,2},{3,4},{4,5}};
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
    cout<<endl;
    print(v);
}