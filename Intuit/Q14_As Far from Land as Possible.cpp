
int x[] = {-1,0,1,0};   
int y[] = {0,1,0,-1};

class Solution {
public:    
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>> q;
        
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j] == 1)
                    q.push({i,j});
            }     
        }

        if(q.size() == n*m)
            return -1;
        
        int dist = 0;

        while(q.size())
        {
            int size = q.size();
            dist++;
            while(size--)
            {
                pair<int,int>p = q.front(); q.pop();
                
                for(int i=0 ; i<4; i++)
                {
                    int xi = p.first + x[i];
                    int yi = p.second + y[i];
                    if(xi>=0 and xi<n and yi>=0 and yi<m and grid[xi][yi] == 0)
                        q.push({xi,yi}) , grid[xi][yi] = 1;
                }
            }  
        }
        return dist-1;
    }

};