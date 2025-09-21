#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    //random order me insert hota hai
    //unique elements ko store krta hai
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.erase(2);
    int target=4;
    // s.find()-> it searches in the set, and if is not found then it returns the last element
    if(s.find(target)!=s.end()){//target exists
        cout<<"exists"<<endl;
    }
    else cout<<"not exists"<<endl;
    for(auto x:s){
        cout<<x<<" "; 
    }
}