class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        
        vector<int>cntZero;
        
        for(int i=0;i<grid.size();i++){
            int cnt=0;
            for(int j=(grid[0].size()-1);j>=0;j--){
                if(grid[i][j]==0)
                    cnt++;
                else
                    break;
            }
            cntZero.push_back(cnt);
        }
        
        int swaps=0;
        
        for(int i=0;i<cntZero.size();i++){
            if(cntZero[i]<(grid[0].size()-i-1)){
                int j=i;
                while(j<grid[0].size()){
                    if(cntZero[j]>=(grid[0].size()-i-1))
                        break;
                    j++;
                }
                if(j==grid[0].size())
                    return -1;
                while(j>i){
                    swap(cntZero[j],cntZero[j-1]);
                    j--;
                    swaps++;
                }
            }
        }
        
        return swaps;
        
    }
};