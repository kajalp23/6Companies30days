int FindMaxSum(int arr[], int n)
    {
        if(n==1)
            return arr[0];
        
        int dp[n];
        dp[0]=arr[0];
        
        for(int i=1;i<n;i++){
            if(i==1)
                dp[i]=max(dp[i-1],arr[i]);
            else
                dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        }
        
        return max(dp[n-1],dp[n-2]);
        
        // Your code here
    }