class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        
        if(root==NULL)return;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            Node *p=q.front();
            q.pop();
            int k=q.size();
            if(p->left)
                q.push(p->left);
            if(p->right)
                q.push(p->right);
            while(k--){
                Node *r=q.front();
                q.pop();
                if(r->left)
                    q.push(r->left);
                if(r->right)
                    q.push(r->right);
                p->nextRight = r;
                p=r;
            }
            p->nextRight=NULL;
        }
        
       // Your Code Here
    }    
      
};