class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int ans=INT_MIN,ans1=INT_MAX;
        
        for(int i=0;i<piles.size();i++){
            if(piles[i]>ans)
                ans=piles[i];
            if(piles[i]<ans1)
                ans1=piles[i];
        }
        
        if(h==piles.size())
            return ans;
        
        int l=1,r=ans;
        
        while(l<=r){
            int mid=l+(r-l)/2;
            long long k=0;
            for(int i=0;i<piles.size();i++)
                k+=(piles[i]+mid-1)/mid;
            if(k<=h){
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
        
    }
};