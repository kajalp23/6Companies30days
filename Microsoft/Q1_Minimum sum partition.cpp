int minDifference(int arr[], int n)  { 
	    
	    long long sum = 0;
        for (int i=0;i<n;i++)
            sum+=arr[i];
            
        bool dp[n + 1][sum + 1];
        
        for (int i = 0;i<= n;i++) {
            for (int j = 0;j<= sum;j++) {
                if(j==0)
                    dp[i][j]=true;
                else if(i==0){
                    dp[i][j]=false;
                }
                else{
                    dp[i][j]=dp[i-1][j];
 
                    if (arr[i-1] <= j)
                        dp[i][j]= dp[i][j] | dp[i-1][j-arr[i-1]];
                }
                
            }
        }
        
        int mindiff=INT_MAX;
        
         for (int k=sum/2; k>= 0; k--) {
            if (dp[n][k] == true) {
                mindiff = (sum-k)-k;
                break;
            }
        }
        return mindiff;
	    
	    // Your code goes here
	} 