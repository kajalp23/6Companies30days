class Solution {
public:
    
    void dfs(vector<vector<int>>& isConnected,int i,bool vis[]){
        vis[i]=true;
        
        for(int k=0;k<isConnected.size();k++){
            if(isConnected[i][k] && !vis[k]){
                dfs(isConnected,k,vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        
        bool *vis=new bool[n];
        for(int i=0;i<n;i++){
            vis[i]=false;
        }
        
        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(isConnected,i,vis);
            }
        }
        
        return cnt;
        
        
    }
};