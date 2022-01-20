string nextPalin(string N) { 
        //complete the function here
        
        int p=-1,q=-1;
        
        if(N.length()<=2)
            return "-1";
     
        p=N.length()/2-1;
        
        for(int i=p;i>0;i--){
            if(N[i-1]<N[i]){
                q=i;
                break;
            }
        }
        
        if(q==-1)
            return "-1";
        int k=q;
        for(int i=q;i<=p;i++){
            if(N[i]>N[q-1]){
                k=i;
            }
        }
        
        string ans="";
        swap(N[q-1],N[k]);
        
        for(int i=0;i<q;i++)
            ans.push_back(N[i]);
        
        string r="";
        for(int i=q;i<=p;i++)
            r.push_back(N[i]);
        sort(r.begin(),r.end());
        
        ans+=r;
        
        if(N.length()%2)
            ans.push_back(N[N.length()/2]);
        
        int t=ans.length()-2;
        if(N.length()%2==1)
            t=ans.length()-2;
        else
            t=ans.length()-1;
            
        while(t>=0){
            ans.push_back(ans[t]);
            t--;
        }
        
        return ans;
        
    }