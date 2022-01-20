string amendSentence (string s)
    {
        
        string ans="";
        
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                if(ans.length()>0)
                    ans.push_back(' ');
                ans.push_back(s[i]+32);
            }
            else
                ans.push_back(s[i]);
        }
        
        return ans;
        
        // your code here
    }