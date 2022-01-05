class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long prod =1;
        int i=0,j=0,ans=0;
        
        while(j<n){
            prod*=a[j];
            while(prod>=k && i<=j){
                prod/=a[i];
                i++;
            }
            if(i<=j){
                ans+=(j-i+1);
            }
            j++;
        }
        
        return ans;
        
    }
};