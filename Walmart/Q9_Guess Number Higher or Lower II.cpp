class Solution {
public:
    int getMoneyAmount(int n) {
        
        vector<vector<int>>dp(n+1,vector<int>(n+1, 0));
        for(int len=2;len<=n;++len){
            for(int begin=0;begin<=n-len;++begin){
                
                int end = begin + len;
                for(int i=begin; i<end; ++i){
                    int num = i+1;
                    if(i == begin){
                        dp[begin][end] = num + dp[begin+1][end];
                    } else {
                        dp[begin][end] = min(dp[begin][end],max(dp[begin][i],dp[i+1][end])+num);
                    }
                    
                }
            }
        }

        return dp[0][n];
        
    }
};