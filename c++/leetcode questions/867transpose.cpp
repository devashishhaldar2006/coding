#include<iostream>
#include<vector>

using namespace std;
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> t(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j]=matrix[j][i];
            }
        }
        return t;
    }
int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        v[i].resize(m); // Resize each row to hold m elements
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int>> t=transpose(v);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}