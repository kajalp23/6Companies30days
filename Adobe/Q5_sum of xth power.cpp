class Solution{
    public:
    
    #define mod 1000000007
    
    long long numOfWays(int n, int x)
    {
        long long dp[n+1];
        memset(dp, 0, sizeof(dp));
      
        dp[0] = dp[1] = 1;
    
        int limit = pow(n, 1.0/x);

        for(int i = 2; i <= limit; i++){
            int curr = pow(i, x);
     
            for(long long j = n; j >= curr; j--){
                dp[j] = (dp[j]%mod+dp[j-curr]%mod)%mod;
            }
        }
        
        return dp[n]%mod;
        
        // code here
    }
};