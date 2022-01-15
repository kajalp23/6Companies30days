class Solution{
public:
    int minSteps(int D){
        // code here
        
        int sum=0;
        
        int i=1;
        while(1){
            sum+=i;
            if(sum==D)
                return i;
            if(sum>D){
                if((sum-D)%2==0)
                    return i;
            }
            i++;
        }
        
        return D;
        
        
    }
};