vector<int> leaders(int a[], int n){
        // Code here
       
       vector<int>lead;
       
       int maxel=INT_MIN;
       
       for(int i=(n-1);i>=0;i--){
           if(a[i]>=maxel){
               lead.push_back(a[i]);
               maxel=a[i];
           }
       }
       
       reverse(lead.begin(),lead.end());
       
       return lead;
        
    }