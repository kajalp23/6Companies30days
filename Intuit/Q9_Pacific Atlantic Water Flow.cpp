class Solution {
public:
    
    bool dp[201][201];
    
    void dfs(int i,int j,int m,int n,bool &at,bool &pas,vector<vector<int>>& heights){
        
        if(i>=m || j>=n || i<0 || j<0)
            return;
        
        if(dp[i][j])
        {
            at=true;
            pas=true;
            return;
        }
        
        if(i==0 || j==0){
            pas=true;
        }
        
        if(i==(m-1) || j==(n-1)){
            at=true;
        }
        
        if((i-1)>=0 && heights[i][j]>=heights[i-1][j])
            dfs(i-1,j,m,n,at,pas,heights);
        
        if((j-1)>=0 && heights[i][j]>=heights[i][j-1])
            dfs(i,j-1,m,n,at,pas,heights);
        
        if((i+1)<m && heights[i][j]>=heights[i+1][j])
            dfs(i+1,j,m,n,at,pas,heights);
        
        if((j+1)<n && heights[i][j]>=heights[i][j+1])
            dfs(i,j+1,m,n,at,pas,heights);    
        
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        vector<vector<int>>ans;
        
        for(int i=0;i<=200;i++){
            for(int j=0;j<=200;j++)
            {
                dp[i][j]=false;
            }
        }
        
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                bool at=false;
                bool pas=false;
                
                dfs(i,j,heights.size(),heights[0].size(),at,pas,heights);
                
                if(at && pas){
                    ans.push_back({i,j});
                    dp[i][j]=true;
                }
                
            }
        }
        
        return ans;
        
    }
};