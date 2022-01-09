int check(string s,string p){
        int i=0,j=0;
        for(i=0,j=0;i<s.length() && j<p.length();i++,j++){
            if(s[i]!=p[j])
                break;
        }
        return i;
    }

    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        
        vector<int>v(n);
        
        vector<string>cont;
        for(int i=0;i<n;i++)
            cont.push_back(contact[i]);
        
        sort(cont.begin(), cont.end());
        cont.erase(unique(cont.begin(), cont.end()),cont.end());
        
        
        for(int i=0;i<cont.size();i++){
            int cnt = check(s,cont[i]);
            
            v[i]=cnt;
            // cout << cnt << " ";
            
        }
        
        vector<vector<string>>ans(s.length());
        
        for(int i=0;i<s.length();i++){
            
            for(int j=0;j<cont.size();j++){
                if(v[j]>i){
                    ans[i].push_back(cont[j]);
                }
            }
            if(ans[i].size()==0)
                ans[i].push_back("0");
        }
        
        return ans;
        
        // code here
    }