class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int i=0,j=n-1;
        
       
        int ans=-1;
        
        while(i<j){
            int mid=(i+j)/2;

            int p=mountainArr.get(mid);
            int p1=mountainArr.get(mid+1);
            if(p<p1)
            {
                ans=mid+1;
                i=mid+1;
            }
            else{

                j=mid;
            }    
 
        }
        // cout << ans;
        // if(i==0 || i==(n-1))
        //     return -1;
 
        i=0;j=ans;
         
        while(i<=j){
            int mid=(i+j)/2;
            
            int p=mountainArr.get(mid);
            if(p==target)
                return mid;
            if(p<target)
                i=mid+1;
            else
                j=mid-1;
        }
        
        i=ans;j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            
            int p=mountainArr.get(mid);
            if(p==target)
                return mid;
            if(p<target)
                j=mid-1;
            else
                i=mid+1;
        }
        
        return -1;
        
    }
};