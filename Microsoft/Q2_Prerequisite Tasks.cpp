bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    
	    vector<int>adj[N];
	    vector<int>in(N,0);
	    
	    for(int i=0;i<prerequisites.size();i++){
	        in[prerequisites[i].first]++;
	        adj[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    
	    queue<int>q;
	    
	    for(int i=0;i<N;i++){
	        if(in[i]==0)
	            q.push(i);
	    }
	    
	    vector<int>vis;
	    while(!q.empty()){
	        int p=q.front();
	        q.pop();
	        vis.push_back(p);
	        
	        for(auto k:adj[p]){
	            in[k]--;
	            if(in[k]==0)
	                q.push(k);
	        }
	    }
	    
	    if(vis.size()!=N)
	        return false;
	    return true;
	}