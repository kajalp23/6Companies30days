vector<int> find3Numbers(vector<int> arr, int N) {
        
        vector<int>v;
        
        int p=INT_MAX;
        int q=INT_MAX;
        int r=-1;
        
        for(int i=0;i<N;i++){
            if(arr[i]<=p){
                p=arr[i];
                continue;
            }
            if(arr[i]>q){
                r=arr[i];
                v.push_back(r);
                break;
            }
            if(arr[i]<q){
                
                q=arr[i];
                v.clear();
                v.push_back(p);
                v.push_back(q);
                continue;
            }
        }
        
        if(v.size()!=3){
            v.clear();
            return v;
        }
        
        return v;
        
        // Your code here
    }