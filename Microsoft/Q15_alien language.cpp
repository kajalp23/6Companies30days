string findOrder(string dict[], int N, int K) {
        //code here
        
        map<char,vector<char>>mp;
        vector<int>in(26,0);
        
        for(int i=0;i<(N-1);i++){
            string p=dict[i],q=dict[i+1];
            
            int j=0,k=0;
            while(j<p.length() && k<q.length()){
                if(p[j]!=q[k])
                    break;
                j++;
                k++;
            }
            if(j!=p.length() && k!=q.length()){
                mp[p[j]].push_back(q[k]);
                in[q[k]-97]++;
            }
            
        }
        
        queue<char>q;
        for(int i=0;i<26;i++){
            if(in[i]==0){
                q.push((char)(i+97));
            }
        }
        
        string s="";
        
        while(!q.empty()){
            char p=q.front();q.pop();
            s.push_back(p);
            
            for(auto k:mp[p]){
                in[k-97]--;
                if(in[k-97]==0)
                    q.push(k);
            }
            
        }
        
        return s;
        
    }