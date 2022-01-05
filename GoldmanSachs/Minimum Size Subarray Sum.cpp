class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int len = INT_MAX;
        
        int sum=0,j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target && j<=i){
                sum-=nums[j];
                j++;
            }
            if(sum<target && j>0){
                j--;
                sum+=nums[j];
            }
            if(sum>=target)
                len=min(len,i-j+1);
            if(len==1)break;
            
        }
        if(len==INT_MAX)
            len=0;
        
        return len;
        
    }
};