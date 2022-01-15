int count(Node* root, int X,int &cnt){
    if(root==NULL)
        return 0;
    int sum=0;
    sum+=count(root->left,X,cnt);
    sum+=count(root->right,X,cnt);
    
    if((sum+root->data)==X)
        cnt++;
        
    return (sum+root->data);
    
}

int countSubtreesWithSumX(Node* root, int X)
{
    
    int cnt=0;
    
    int sum=count(root,X,cnt);
    
    return cnt;
    
	// Code here
}