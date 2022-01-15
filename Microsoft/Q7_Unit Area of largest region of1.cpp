class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int a[8]={0,0,1,1,1,-1,-1,-1};
    int b[8]={1,-1,0,1,-1,0,1,-1};
    
    void dfs(int i,int j,vector<vector<int>>& grid,int cnt,int &ans){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return;
        ans=max(ans,cnt);
        grid[i][j]=0;
        
        for(int p=0;p<8;p++){
            int x=i+a[p],y=j+b[p];
            if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]==0)
                continue;
            dfs(x,y,grid,cnt+1,ans);
            
        }
        
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int cnt=1;
                if(grid[i][j]==1)
                    dfs(i,j,grid,cnt,ans);
            }
        }
        
        return ans;
        
    }
};
