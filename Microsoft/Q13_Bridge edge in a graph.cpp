void dfs(int i,int v,bool vis[],vector<int> adj[]){
        vis[i]=true;
        for(auto k:adj[i]){
            if(!vis[k])
                dfs(k,v,vis,adj);
        }
    }
    
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        
        int cnt1=0,cnt2=0;
        
        bool *vis=new bool[V];
        for(int i=0;i<V;i++)
            vis[i]=false;
            
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt1++;
                dfs(i,V,vis,adj);
            }
        }
        
        auto p=find(adj[c].begin(),adj[c].end(),d);
        adj[c].erase(p);
        
        auto q=find(adj[d].begin(),adj[d].end(),c);
        adj[d].erase(q);
        
        for(int i=0;i<V;i++)
            vis[i]=false;
            
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt2++;
                dfs(i,V,vis,adj);
            }
        }
        
        if(cnt2>cnt1)
            return 1;
        return 0;
        
        // Code here
    }