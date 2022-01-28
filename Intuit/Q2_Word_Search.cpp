void dfs(vector<vector<char>> &board,int i,int j, string word, int k,bool &ans){
        if(k>=word.length()){
            ans=true;
            return;
        }
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='1')
            return;
        if(board[i][j]!=word[k])
            return;
        board[i][j]='1';
        
        dfs(board,i-1,j,word,k+1,ans);
        dfs(board,i+1,j,word,k+1,ans);
        dfs(board,i,j-1,word,k+1,ans);
        dfs(board,i,j+1,word,k+1,ans);
        
        board[i][j]=word[k];
        
    }


    bool isWordExist(vector<vector<char>>& board, string word) {
        
        bool ans=false;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    dfs(board,i,j,word,0,ans);
                }
                if(ans==true)
                    return true;
            }
        }
        
        return false;
        
        // Code here
    }