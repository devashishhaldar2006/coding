#include<iostream>
#include<vector>
using namespace std;
// void change(vector <int> a){//pass by value
//     a[0]=100;
// }
void change(vector <int>& a){//pass by refernce
    a[0]=100;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}