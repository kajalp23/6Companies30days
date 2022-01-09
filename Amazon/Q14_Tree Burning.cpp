int minTime(Node* root, int target) 
    {
        map<Node*,Node*>mp;
        mp[root]=NULL;
        
        queue<Node*>q;
        q.push(root);
        Node *curr=NULL;
        
        while(!q.empty()){
            Node *p=q.front();
            q.pop();
            if(p->data==target)
                curr=p;
            
            if(p->left){
                mp[p->left]=p;
                q.push(p->left);
            }
            if(p->right){
                mp[p->right]=p;
                q.push(p->right);
            }
            
        }
        
        queue<Node*>pq;
        pq.push(curr);
        
        map<Node*,int>mp1;
        
        mp1[curr]=0;
        int ans=0;
        
        while(!pq.empty()){
            Node* p=pq.front();pq.pop();
            ans=max(ans,mp1[p]);
            
            if(p->left){
                if(mp1.find(p->left)==mp1.end()){
                    mp1[p->left]=mp1[p]+1;
                    pq.push(p->left);
                }
            }
            if(p->right){
                if(mp1.find(p->right)==mp1.end()){
                    mp1[p->right]=mp1[p]+1;
                    pq.push(p->right);
                }
            }
            if(mp[p]){
                if(mp1.find(mp[p])==mp1.end()){
                    mp1[mp[p]]=mp1[p]+1;
                    pq.push(mp[p]);
                }
            }
            
        }
        
        return ans;
        
        
        // Your code goes here
    }