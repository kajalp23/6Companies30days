int equalPartition(int N, int arr[])
    {
        // code here
        
        long long sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
            
        if(sum%2==1)
            return 0;
        
        sum=sum/2;
        
        bool p[N+1][sum+1];
        
        for(int i=0;i<=N;i++){
            for(long long j=0;j<=sum;j++){
                if(j==0)
                    p[i][j]=true;
                else if(i==0)
                    p[i][j]=false;
                else{
                    if(j>=arr[i-1]){
                        p[i][j]=p[i-1][j] || p[i-1][j-arr[i-1]];
                    }
                    else
                        p[i][j]=p[i-1][j];
                }
            }
        }
        
        
        return p[N][sum];
        
    }