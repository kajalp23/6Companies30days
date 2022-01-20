int dp[501][501];
    
    int coins(vector<int>&A,int i,int j){
        if(i==j)
            return dp[i][j]=A[i];
        if((i+1)==j){
            return dp[i][j]=max(A[i],A[j]);
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int inc = A[i]+min(coins(A,i+2,j),coins(A,i+1,j-1));
        int exc = A[j]+min(coins(A,i,j-2),coins(A,i+1,j-1));
        
        return dp[i][j]=max(inc,exc);
            
    }

    int maxCoins(vector<int>&A,int n)
    {
        memset(dp,-1,sizeof(dp));
        int ans = coins(A,0,n-1);
        
        return ans;
        
        
	    //Write your code here
    }