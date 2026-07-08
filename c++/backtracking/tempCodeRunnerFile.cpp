#include<bits/stdc++.h>
using namespace std;
void mazePath(int row,int col,vector<vector<bool>>& isVisited,string s){
    if(row<1 || row>=isVisited.size() || col<1 || col>=isVisited[0].size()) return;
    if(isVisited[row][col]) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    isVisited[row][col] = true;
    mazePath(row-1,col,isVisited,s+"U");
    mazePath(row,col-1,isVisited,s+"L");
    mazePath(row+1,col,isVisited,s+"D");
    mazePath(row,col+1,isVisited,s+"R");
    //backtracking
    isVisited[row][col] = false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<bool>> isVisited(n+1,vector<bool>(m+1,false));
    mazePath(n,m,isVisited,"");
}