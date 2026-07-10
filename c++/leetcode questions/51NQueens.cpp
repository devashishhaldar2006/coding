class Solution {
public:
    bool isSafe(vector<string> board,int row,int col){
        int n=board.size();
        // check row-> East and West
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q') return false;
        }
        // check col-> North and South
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
        }
        // check northeast
        int i=row,j=col;
        while(i>=0 && j<n){
            if(board[i][j]=='Q') return false;
            i--;
            j++;
        }
        +// check southwest
        i=row,j=col;
        while(i<n && j>=0){
            if(board[i][j]=='Q') return false;
            i++;
            j--;
        }
        // check northwest
        i=row,j=col;
        while(i>=0 and j>=0){
            if(board[i][j]=='Q') return false;
            i--;
            j--;
        }
        // check southeast
        i=row,j=col;
        while(i<n && j<n){
            if(board[i][j]=='Q') return false;
            i++;
            j++;
        }
        return true;

    }
    void nqueen(vector<string>& board,int row,vector<vector<string>>& ans){
        int n=board.size();
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(board,row,j)){
                board[row][j]='Q';
                nqueen(board,row+1,ans);
                // backtracking
                board[row][j]='.';
            }
        }
    }
   
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string (n,'.'));
        vector<vector<string>> ans;
        nqueen(board,0,ans);
        return ans;
    }
};