bool canPair(vector<int> nums, int k) {
        // Code here.
        if(nums.size()==1 || (nums.size()%2==1))
            return false;
            
        vector<int>rem(k+1,0);
        
        for(int i=0;i<nums.size();i++)
            rem[nums[i]%k]++;
        
        rem[k]=rem[0];
      
        
        for(int i=0;i<k;i++){
            if(i==(k-i) && rem[i]%2!=0)
                return false;
            if(rem[i]!=rem[k-i])
                return false;
        }
        return true;
    }