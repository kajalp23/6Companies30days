 void linkdelete(struct Node  *head, int M, int N)
    {
        
        struct Node *p=head,*q=head;
        
        while(p!=NULL){
            q=p;
            int r=M-1;
            while(q!=NULL && r>0){
                q=q->next;
                r--;
            }
            
            if(q!=NULL){
                Node *s=q->next;
                r=N;
                while(s!=NULL && r>0){
                    Node *k=s->next;
                    r--;
                    delete(s);
                    s=k;
                }
                q->next=s;
                p=s;
            }
            else
                p=q;        
            
        }
        
        
        
        //Add code here   
    }