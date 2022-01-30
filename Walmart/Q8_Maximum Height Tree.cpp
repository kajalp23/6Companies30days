class Solution{
public:
    int height(int N){
        
        long k=2*N;
       
        long r=sqrt(k);
       
        r-=2;
        
        while(r*(r+1)<=k)
            r++;
            
        return (r-1);
        
       
        
        // code here
    }
};