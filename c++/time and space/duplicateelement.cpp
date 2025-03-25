#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(11);
    v.push_back(9);
    int n=v.size()-1;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=v[i];
    }
    int newsum=(n*(n+1))/2;
    int m=sum-newsum;
    cout<<"duplicate= "<<m<<endl;
}