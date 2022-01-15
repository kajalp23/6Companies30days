void rotate(vector<vector<int> >& matrix)
{
    
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<i;j++){
            int p=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=p;
        }
    }
    
    for(int i=0;i<matrix.size()/2;i++){
        vector<int>p=matrix[i];
        matrix[i]=matrix[matrix.size()-i-1];
        matrix[matrix.size()-i-1]=p;
    }
    
    // Your code goes here
}