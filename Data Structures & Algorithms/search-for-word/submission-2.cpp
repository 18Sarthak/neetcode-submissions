class Solution {
private:
    bool dfs(int r,int c,vector<vector<char>>& board,string word,int ind){
        if(ind==word.size()){
            return true;
        }

        if(c<0 || c>=(int)board[0].size() || r<0 || r>=(int)board.size() || board[r][c]!=word[ind]){
            return false;
        }
        char temp=board[r][c];
        board[r][c]='#';
        bool found=dfs(r+1,c,board,word,ind+1)||
                   dfs(r-1,c,board,word,ind+1)||
                   dfs(r,c+1,board,word,ind+1)||
                   dfs(r,c-1,board,word,ind+1);

        board[r][c]=temp;
        return found;
                    
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int r=0;r<row;r++){
            for(int c=0;c<col;c++){
                if(dfs(r,c,board,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
