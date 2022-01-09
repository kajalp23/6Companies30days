string colName (long long int n)
    {
        
        string s="";
        
        while(n>0){
            int p=n%26;
            if(p==0){
                p=26;
                n-=26;
            }
            s=(char)(p+64)+s;
            n/=26;
        }
        
        return s;
        
        // your code here
    }