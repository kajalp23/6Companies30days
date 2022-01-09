int isValid(vector<vector<int>> mat){
        
        int i=0,j=0;
        
        for(;i<9;i+=3){
            for(j=0;j<9;j+=3){
               int k=i,l=j;
               int p[10]={0};
                for(k=i;k<(i+3);k++){
                    for(l=j;l<(j+3);l++){
                        if(mat[k][l]!=0)
                        {
                            if(p[mat[k][l]])
                                return 0;
                            p[mat[k][l]]++;
                        }
                    }
                }
            }
        }
        
        for(int i=0;i<9;i++){
            int p[10]={0};
            for(int j=0;j<9;j++){
                if(mat[i][j]){
                    if(p[mat[i][j]])
                        return 0;
                    p[mat[i][j]]++;
                }
                
            }
        }
        
        for(int i=0;i<9;i++){
            int p[10]={0};
            for(int j=0;j<9;j++){
                if(mat[j][i]){
                    if(p[mat[j][i]])
                        return 0;
                    p[mat[j][i]]++;
                }
                
            }
        }
        
        return 1;
        
        
        // code here
    }