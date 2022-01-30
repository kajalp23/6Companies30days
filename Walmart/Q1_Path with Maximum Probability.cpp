class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<pair<int,double>>v[n];
        
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]].push_back({edges[i][1],succProb[i]});
            v[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        
        vector<double>dist(n,0);

        dist[start]=1;
        queue<int>q;
        q.push(start);
        
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int p=q.front();q.pop();
                for(auto k:v[p]){
                    if(dist[k.first]<(dist[p]*k.second)){
                        dist[k.first]=dist[p]*k.second;
                        q.push(k.first);
                    }
                   
                }
            
            }
            
            
        }
        
        return dist[end];
        
    }
};