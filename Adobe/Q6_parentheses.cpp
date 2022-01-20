void generate(int o,int c,int N,string p,vector<string>&ans){
        if(c>=N){
            ans.push_back(p);
            return;
        }
        
        if(o<N){
            generate(o+1,c,N,p+'(',ans);
        }
        if(c<o){
            generate(o,c+1,N,p+')',ans);
        }
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        
        vector<string>ans;
        string p="";
        
        generate(0,0,n,p,ans);
        
        return ans;
        
        
        // Your code goes here 
    }