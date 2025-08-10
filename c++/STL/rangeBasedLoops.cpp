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
    for(int &value:v){//makes changes to original vector
        value++;
        cout<<value<<" ";
    }
    cout<<endl;
    for(int value:v){//makes duplicate and makes changes to it
        cout<<value<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    for(pair<int,int> &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    for(auto &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto a=1;//automatically defines data type
    cout<<a<<endl;
}
