vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        
        int i=0,j=0,k=r-1,l=c-1;
        
        while(i<=k && j<=l){
            int p=j;
            while(p<=l){
                ans.push_back(matrix[i][p]);
                p++;
            }

            p=i+1;
            while(p<=k){
                ans.push_back(matrix[p][l]);
                p++;
            }

            if(i!=k){
                p=l-1;
                while(p>=j){
                    ans.push_back(matrix[k][p]);
                    p--;
                }
            }
            
            if(j!=l){
                p=k-1;
                while(p>i){
                    ans.push_back(matrix[p][j]);
                    p--;
                }
            }
            
            
            i++;
            j++;
            k--;
            l--;
            
        }
        
        return ans;
        
        // code here 
    }