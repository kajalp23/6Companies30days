vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<k && i<n;i++){
            pq.push({arr[i],i});
        }
        
        vector<int>v;
        
        if(n==1){
            vector<int>t(arr,arr+n);
            return t;
        }
        
        if(k<=n)
            v.push_back(pq.top().first);
        
        for(int j=k;j<n;j++){
            pq.push({arr[j],j});
            int t=j-k,r=pq.top().second;
            while(!pq.empty() && r<=t){
                pq.pop();
                r=pq.top().second;
            }
            v.push_back(pq.top().first);
        }
        
        return v;
        
        // your code here
    }