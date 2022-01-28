int splitArray(vector<int>& nums, int m) {
        
        long long r=0,ans=0;
        
        for(int i=0;i<nums.size();i++){
            r+=nums[i];
            if(nums[i]>ans)
                ans=nums[i];
        }
        
        long long l=0;
        
        while(l<=r){
            long long mid=l+(r-l)/2;
            
            int cnt=1,i=0;
            long long sum=0;
            for(i=0;i<nums.size();i++){
                if(nums[i]>mid)
                    break;
                sum+=nums[i];
                if(sum>mid){
                    cnt++;
                    sum=nums[i];
                }
                if(cnt>m)
                    break;
            }
            if(cnt>m || (i<nums.size() && nums[i]>mid)){
                l=mid+1;
            }
            else{
                ans=mid;
                r=mid-1;
            }
            
        }
        
        return ans;
        
    }