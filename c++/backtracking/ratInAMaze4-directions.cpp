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
void mazePath2(int sr,int sc,int er,int ec,vector<vector<bool>>& isVisited,string s){
    if(sr<0 || sr>=isVisited.size() || sc<0 || sc>=isVisited[0].size()) return;
    if(isVisited[sr][sc]) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    isVisited[sr][sc] = true;
    mazePath2(sr-1,sc,er,ec,isVisited,s+"U");
    mazePath2(sr,sc-1,er,ec,isVisited,s+"L");
    mazePath2(sr+1,sc,er,ec,isVisited,s+"D");
    mazePath2(sr,sc+1,er,ec,isVisited,s+"R");
    //backtracking
    isVisited[sr][sc] = false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<bool>> isVisited(n+1,vector<bool>(m+1,false));
    // for sr sc based indexing
    // vector<vector<bool>> isVisited(n, vector<bool>(m, false));
    // mazePath(n,m,isVisited,"");
    mazePath2(0,0,n-1,m-1,isVisited,"");
}