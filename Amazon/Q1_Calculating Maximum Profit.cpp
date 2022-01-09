int maxProfit(int K, int N, int arr[]) {
        // code here
        
        int dp[K+1][N];
        
        int ans=0;
        for(int i=0;i<=K;i++){
            int m=INT_MIN;
            for(int j=0;j<N;j++){
                if(i==0)
                    dp[i][j]=0;
                else{
                    if(j==0)
                    {
                        dp[i][j]=0;
                        m=max(m,-arr[j]);
                    }
                    else{
                        dp[i][j]=max(dp[i][j-1],m+arr[j]);
                        m=max(m,dp[i-1][j]-arr[j]);
                    }
                }
            }
        }

        return dp[K][N-1];
        
    }