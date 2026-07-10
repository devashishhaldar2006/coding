class Solution {
public:
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
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                char num=board[i][j];
                board[i][j]='.';
                if(isValid(board,i,j,num)==false) return false;
                // backtracking
                board[i][j]=num;
            }
        }
        return true;
    }
};