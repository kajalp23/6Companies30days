vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<(k-1);i++){
            pq.push({arr[i],i});
        }
        
        vector<int>v;
        
        for(int i=(k-1);i<n;i++){
            pq.push({arr[i],i});
            
            while(!pq.empty() && pq.top().second<=(i-k)){
                pq.pop();
            }
            
            v.push_back(pq.top().first);
            
        }
        
        return v;
        
    }