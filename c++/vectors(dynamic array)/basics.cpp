#include<iostream>
#include<vector>
using namespace std;
//sirf push back krn pr he size badhta h for TC analysis
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}