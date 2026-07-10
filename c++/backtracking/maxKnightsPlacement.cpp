#include<bits/stdc++.h>
using namespace std;
int maxKnights=INT_MIN;
int number=1;
bool isSafe(vector<vector<char>>& board,int row,int col){
    int n=board.size();
    // 2 up 1 right
    int i=row-2,j=col+1;
    if(i>=0 and j<n and board[i][j]=='K') return false;
    // 2 up 1 left
    i=row-2,j=col-1;
    if(i>=0 and j>=0 and board[i][j]=='K') return false;
    // 2 down 1 right
    i=row+2,j=col+1;
    if(i<n and j<n and board[i][j]=='K') return false;
    // 2 down 1 left
    i=row+2,j=col-1;
    if(i<n and j>=0 and board[i][j]=='K') return false;
    // 2 left 1 up
    i=row-1,j=col-2;
    if(i>=0 and j>=0 and board[i][j]=='K') return false;
    // 2 right 1 up
    i=row-1,j=col+2;
    if(i>=0 and j<n and board[i][j]=='K') return false;
    // 2 left 1 down
    i=row+1,j=col-2;
    if(i<n and j>=0 and board[i][j]=='K') return false;
    // 2 right 1 down
    i=row+1,j=col+2;
    if(i<n and j<n and board[i][j]=='K') return false;
    return true;
}
void nKnights(vector<vector<char>>& board,int row,int col,int num){
    int n=board.size();
    if(row==n){
        maxKnights=max(maxKnights,num);
        return;
    }
    else if(isSafe(board,row,col)){
        board[row][col]='K';
        if(col!=n-1) nKnights(board,row,col+1,num+1);
        else nKnights(board,row+1,0,num+1);
        board[row][col]='X';
    }
    if(col!=n-1) nKnights(board,row,col+1,num);
    else nKnights(board,row+1,0,num);
}


int main(){
    int n=3;
    vector<vector<char>> board(n,vector<char>(n,'X'));
    nKnights(board,0,0,0);
    cout<<maxKnights;
}