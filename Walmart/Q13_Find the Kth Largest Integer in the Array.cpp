class Solution {
public:
    
    static bool cmp(string &a,string &b){
        if(a==b)
            return a<b;
        if(a.length()==b.length()){
            for(int i=0;i<a.length();i++){
                if(a[i]!=b[i]){
                    return a[i]>b[i];
                }
            }
        }
        return a.length()>b.length();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        
        
        return nums[k-1];
        
    }
};