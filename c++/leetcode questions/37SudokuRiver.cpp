class Solution {
public:
    int check=0;
    bool isValid(vector<vector<char>>& board,int row,int col,char num){
        // check row
        for(int j=0;j<9;j++){
            if(board[row][j]==num) return false;
        }
        // check col
        for(int i=0;i<9;i++){
            if(board[i][col]==num) return false;
        }
        // 3x3 grid
        int sr=row/3*3;
        int sc=col/3*3;
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(board[i][j]==num) return false;
            }
        }
        return true;
    }
    void solve(vector<vector<char>>& board,int row,int col){
        if(row==9){
            check=1;
            return;
        }
        else if(board[row][col]!='.'){
            if(col!=8) solve(board,row,col+1);
            else solve(board,row+1,0);
        }
        else{
            for(char ch='1';ch<='9';ch++){
                if(isValid(board,row,col,ch)){
                    board[row][col]=ch;
                    if(col!=8) solve(board,row,col+1);
                    else solve(board,row+1,0);
                    if(check==1) return;
                    // backtracking
                    board[row][col]='.';
                }
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
        check=0;
    }
};