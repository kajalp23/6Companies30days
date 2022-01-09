class Solution
{
    public:
    vector<int>a;
    //Function to serialize a tree and return a list containing nodes of tree.
    
    void serial(Node *r){
        if(r==NULL){
            a.push_back(-1);
            return;
        }
        a.push_back(r->data);
        serial(r->left);
        serial(r->right);
    }
    
    vector<int> serialize(Node *root) 
    {
        if(root==NULL)
        {
            a.push_back(-1);
            return a;
        }
        
        serial(root);
        return a;
     
        //Your code here
    }
    
    
    Node* dfs(int &i,vector<int>A){
        if(i>=A.size())
            return NULL;
        if(A[i]==-1)
            return NULL;
        else{
            Node *p=new Node(A[i++]);
            p->left = dfs(i,A);
            i++;
            p->right=dfs(i,A);
            
            return p;
        }
        
        
    }

    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {

        int i=0;
        Node *p=dfs(i,A);

        return p;
        
       //Your code here
    }

};