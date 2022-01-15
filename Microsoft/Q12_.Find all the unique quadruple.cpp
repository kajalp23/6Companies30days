class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        
        set<vector<int> >ans;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<(arr.size()-3);i++){
            for(int j=i+1;j<(arr.size()-2);j++){
                int m=j+1,l=arr.size()-1;
                
                while(m<l){
                    int sum=arr[i]+arr[j]+arr[m]+arr[l];
                    
                    if(sum==k){
                        ans.insert({arr[i],arr[j],arr[m],arr[l]});
                        
                        while(m<l){
                            if(arr[m]==arr[m+1])
                                m++;
                            else{
                                m++;
                                break;
                            }
                        }
                        
                        while(l>m){
                            if(arr[l]==arr[l-1])
                                l--;
                            else{
                                l--;
                                break;
                            }
                        }
                        
                    }
                    else if(sum<k){
                        m++;
                    }
                    else
                        l--;
                }
                
                
            }
        }
        
        vector<vector<int> >res;
        
        for(auto it=ans.begin();it!=ans.end();it++){
            res.push_back(*it);
        }
        
        return res;
        
    }
};