class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans;
        
        vector<int>in(numCourses,0);
        
        vector<int>adj[numCourses];
        
        for(int i=0;i<prerequisites.size();i++){
            
            in[prerequisites[i][0]]++;
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            
            
        }
        
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(in[i]==0)
                q.push(i);
        }
        
        while(!q.empty()){
            int p=q.front();
            q.pop();
            ans.push_back(p);
            
            for(auto k:adj[p]){
                in[k]--;
                if(in[k]==0)
                    q.push(k);
            }
        }
        
        if(ans.size()==numCourses)
            return ans;
        
        return {};
        
    }
};