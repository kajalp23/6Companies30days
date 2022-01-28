class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
        
        long long ans=0;
        
        for(int i=0;i<points.size();i++){
            map<long,int>mp;
            for(int j=0;j<points.size();j++){
                if(i==j)
                    continue;
                long long dist1=points[i][0]-points[j][0];
                long long dist2=points[i][1]-points[j][1];
                
                long long dist=(dist1*dist1)+(dist2*dist2);
                ans+=(mp[dist]*2);
                mp[dist]++;
                
            }
        }
        
        return ans;
        
    }
};