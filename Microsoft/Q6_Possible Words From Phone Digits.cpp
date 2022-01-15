class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    vector<string>v={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void dfs(int a[],int i,int N,string p,vector<string>&ans){
        if(i>=N){
            ans.push_back(p);
            return;
        }
        
        string r=v[a[i]-2];
        
        for(int j=0;j<r.length();j++){
            dfs(a,i+1,N,p+r[j],ans);
        }
        
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        
        vector<string>ans;
        string p="";
        
        dfs(a,0,N,p,ans);
        
        return ans;
        
        
        //Your code here
    }
};
