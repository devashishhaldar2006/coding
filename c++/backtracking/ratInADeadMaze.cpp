#include<bits/stdc++.h>
using namespace std;
void mazePath(int sr,int sc,int er,int ec,
vector<vector<int>>& maze,vector<vector<bool>>& isVisited,string s){
    if(sr<0 || sr>=maze.size() || sc<0 || sc>=maze[0].size()) return;
    if(isVisited[sr][sc]) return;
    if(maze[sr][sc]) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    isVisited[sr][sc]=true;
    mazePath(sr-1,sc,er,ec,maze,isVisited,s+"U");
    mazePath(sr,sc-1,er,ec,maze,isVisited,s+"L");
    mazePath(sr+1,sc,er,ec,maze,isVisited,s+"D");
    mazePath(sr,sc+1,er,ec,maze,isVisited,s+"R");
    isVisited[sr][sc]=false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> maze(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j];
        }
    }
    vector<vector<bool>> isVisited(n,vector<bool>(m,false));
    mazePath(0,0,n-1,m-1,maze,isVisited,"");
}