#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v(3, vector<int>(4, 5));
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
    
}