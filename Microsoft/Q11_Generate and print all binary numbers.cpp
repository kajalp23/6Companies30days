vector<string> generate(int N)
{
    
    vector<string>ans;
    
    
    for(int i=1;i<=N;i++){
        int p=i;
        string r="";
        
        while(p>0){
            int k=p%2;
            p/=2;
            r=(char)(k+48)+r;
        }
        
        ans.push_back(r);
        
    }
    
    return ans;
    
	// Your code here
}