class Solution {
public:
    bool isValid(int row,int col,vector<string>& board,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }

    void solve(int col,int n,vector<vector<string>>& ans,vector<string>& board,string s){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isValid(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,n,ans,board,s);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        
        string s(n,'.');
        vector<string>board(n,s);
        
        

        solve(0,n,ans,board,s);
        return ans;
    }
};
