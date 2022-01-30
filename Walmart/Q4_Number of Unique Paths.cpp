class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        
        int p[a][b];
        
        for(int i=(a-1);i>=0;i--){
            for(int j=(b-1);j>=0;j--){
                if(i==(a-1))
                    p[i][j]=1;
                else if(j==(b-1))
                    p[i][j]=1;
                else
                    p[i][j]=p[i+1][j]+p[i][j+1];
                
            }
        }
        
        return p[0][0];
        
        //code here
    }
};