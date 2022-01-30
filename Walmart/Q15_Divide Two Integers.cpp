class Solution {
public:
    int divide(long dividend, long divisor) {
        int sign=1;
        if(dividend<0){
            sign*=-1;
            dividend*=-1;
        }
        if(divisor<0){
            sign*=-1;
            divisor*=-1;
        }
        
        long ans = exp(log(dividend)-log(divisor));
        
        ans*=sign;
        if(ans>INT_MAX)
            ans=INT_MAX;
        if(ans<INT_MIN)
            ans=INT_MIN;
        
        return ans;
        
    }
};