class Solution{
  public:
  
    struct cmp{
      
      bool operator()(pair<int,string>p1,pair<int,string>p2){
          return p1.first>p2.first;
      }
        
    };
  
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        
        vector<vector<string> >ans;
        
        map<string,vector<string>>mp;
        map<string,int>mp1;
        
        for(int i=0;i<string_list.size();i++){
            string p=string_list[i];
            sort(p.begin(),p.end());
            
            mp[p].push_back(string_list[i]);
            mp1[p]=i;
        }
        
        // cout << mp1["act"] << " " << mp1["dgo"] << "\n";
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>st;
        for(auto k:mp1){
            st.push({k.second,k.first});
        }
        
        while(!st.empty()){
            ans.push_back(mp[st.top().second]);
            
            st.pop();
        }
        
        
        return ans;
        
    }
};