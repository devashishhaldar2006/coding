#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    v.push_back({13,14,15,16});
    cout<<endl;
    v.pop_back();
}