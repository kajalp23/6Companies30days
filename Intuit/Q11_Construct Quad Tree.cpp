class Solution {
public:
    
    Node *constTree(vector<vector<int>>& grid,int i,int j,int n){
        
        if(n==2){
            if(grid[i][j]==grid[i][j+1] && grid[i][j]==grid[i+1][j] && grid[i][j]==grid[i+1][j+1]){
                bool val=false;
                if(grid[i][j]==1)
                    val=true;
                Node *root=new Node(val,true);
                return root;
            }
            else
            {
                Node *root=new Node(true,false,new Node(grid[i][j],true),new Node(grid[i][j+1],true),new Node(grid[i+1][j],true),new Node(grid[i+1][j+1],true));
                return root;
            }
            
        }
        
        Node *root=new Node();
        
        int flg=0;
        for(int k=i;k<(i+n);k++){
            for(int l=j;l<(j+n);l++){
                if(grid[k][l]!=grid[i][j]){
                    flg=1;
                    break;
                }
            }
        }
        if(flg==1){
            root->topLeft=constTree(grid,i,j,n/2);
            root->topRight=constTree(grid,i,j+n/2,n/2);
            root->bottomLeft=constTree(grid,i+n/2,j,n/2);
            root->bottomRight=constTree(grid,i+n/2,j+n/2,n/2);
        }
        else{
            root=new Node(grid[i][j],true);
        }
        return root;
        
    }
    
    Node* construct(vector<vector<int>>& grid) {
        
        
        int n=grid.size();
        
        Node *root=constTree(grid,0,0,n);
        
        return root;
        
        
        
    }
};