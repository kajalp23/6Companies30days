string printMinNumberForPattern(string S){
        
        
        int curr=1,dcount=0;
        string ans="";
        
        for(int i=0;i<S.length();i++){
            if(i==0 && S[i]=='I'){
                curr=2;
                ans.push_back('1');
            }
            
            if(S[i]=='D')
                dcount++;
            
            int j=i+1;
            while(j<S.length() && S[j]=='D'){
                dcount++;
                j++;
            }
            int k=dcount;
            while(dcount>=0){
                ans.push_back(char(curr+dcount+48));
                dcount--;
            }
            curr+=(k+1);
            i=j-1;
            dcount=0;
                
        }
        
        return ans;
        
        // code here 
        
    }