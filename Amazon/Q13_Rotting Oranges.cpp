class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        
        int ans[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                ans[i][j]=INT_MAX;
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
    
                    queue<pair<int,int>>q;
               
                    q.push({i,j});
                    ans[i][j]=0;
                    while(!q.empty()){
                        pair<int,int>p=q.front();
                        q.pop();
                        
                        int x=p.first,y=p.second;
                        
                        if((x-1)>=0){
                            if(grid[x-1][y]==1 && ans[x-1][y]>(ans[x][y]+1)){
                                ans[x-1][y]=min(ans[x-1][y],ans[x][y]+1);
                                q.push({x-1,y});
                                
                            }
                        }
                        if((x+1)<m){
                            if(grid[x+1][y]==1 && ans[x+1][y]>(ans[x][y]+1)){
                                ans[x+1][y]=min(ans[x+1][y],ans[x][y]+1);
                                q.push({x+1,y});
                                
                            }
                        }
                        if((y-1)>=0){
                            if(grid[x][y-1]==1 && ans[x][y-1]>(ans[x][y]+1)){
                                ans[x][y-1]=min(ans[x][y-1],ans[x][y]+1);
                                q.push({x,y-1});
                                
                            }
                        }
                        if((y+1)<n){
                            if(grid[x][y+1]==1 && ans[x][y+1]>(ans[x][y]+1)){
                                ans[x][y+1]=min(ans[x][y+1],ans[x][y]+1);
                                q.push({x,y+1});
                                
                            }
                        }
                        
                    }
                }
            }
        }
        
        int res=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 && ans[i][j]==INT_MAX)
                    return -1;
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]!=INT_MAX)
                    res=max(res,ans[i][j]);
            }
        }
        return res;
    }
};