class Solution {
  public:
  
    int sum(Node *n){
        if(n==NULL)
            return 0;
        int ls = sum(n->left);
        int rs = sum(n->right);
        
        int node = n->data;
        n->data = ls+rs;
        
        return node+n->data;
    }
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        if(node==NULL)return;
        
        if(node->left==NULL && node->right==NULL){
            node->data=0;
            return;
        }
        
        int k=sum(node);
        // Your code here
    }
};