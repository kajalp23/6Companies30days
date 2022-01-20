vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        map<string,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
            
        string name="";
        int cnt=0;
        
        for(auto k:mp){
            if(k.second>cnt){
                cnt=k.second;
                name=k.first;
            }
            else if(k.second==cnt){
                if(k.first<name)
                    name=k.first;
            }
            
        }
        vector<string>ans;
        ans.push_back(name);
        ans.push_back(to_string(cnt));
        
        return ans;
        
    }