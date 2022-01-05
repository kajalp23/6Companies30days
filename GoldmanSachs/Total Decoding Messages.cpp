int CountWays(string str){
		    
		    int n=str.length();
		    if(str[0]=='0')
		        return 0;
		    int dp[n];
		    dp[0]=1;
		    
		    for(int i=1;i<n;i++){
		        if(str[i]=='0'){
		            if(str[i-1]=='0' || str[i-1]>='3')
		                return 0;
		            if(i==1)
		                dp[i]=1;
		            else
		                dp[i]=dp[i-2];
		        }
		        else{
		            
		            if(str[i-1]=='0')
		                dp[i]=dp[i-1];
		            else{
		                dp[i]=dp[i-1];
		                if(str[i-1]=='2'){
		                    if(str[i]<='6'){
		                        if(i==1)
		                            dp[i] = (dp[i]+1)%1000000007;
		                        else
		                            dp[i]=(dp[i]%1000000007+dp[i-2]%1000000007)%1000000007;
		                    }
		                        
		                }
		                else if(str[i-1]=='1'){
		                    if(i==1)
		                            dp[i]=(dp[i]+1)%1000000007;
		                        else
		                            dp[i]=(dp[i]%1000000007+dp[i-2]%1000000007)%1000000007;
		                }
		            }
		            
		        }
		    }
		    
		  //  for(int i=0;i<n;i++)
		  //      cout << dp[i] << " ";
		    
		    return dp[n-1];
		    
		    // Code here
		}