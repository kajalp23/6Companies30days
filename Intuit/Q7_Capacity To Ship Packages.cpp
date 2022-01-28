class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int l=0;
        long long r=0,mmax=0;
        
        for(int i=0;i<weights.size();i++){

            if(weights[i]>mmax)
                mmax=weights[i];
            r+=weights[i];
        }
        if(days==1)
            return r;
        if(days==weights.size())
            return mmax;
        long long ans=mmax;
     
        while(l<=r){
            long long mid=l+(r-l)/2;
            
            long long k=1,i=0;
            long long sum=0;
            for(i=0;i<weights.size();i++){
                if(weights[i]>mid)
                    break;
                sum+=weights[i];
                if(sum>mid){
                    k++;
                    sum=weights[i];
                }
                if(k>days)
                    break;
            }
            if(i<weights.size() && weights[i]>mid){
                l=mid+1;
            }
            else if(k==days){
                r=mid-1;
                ans=mid;
            }
            else if(k<days){
                r=mid-1;
                ans=mid;
            }
            else
                l=mid+1;
            
        }
        
        return ans;
        
    }
};