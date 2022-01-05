int *findTwoElement(int *arr, int n) {
        
        int *p = new int[2];
        
        
        for(int i=0;i<n;i++){
            int r=abs(arr[i]);
            if(arr[r-1]<0){
                p[0]=abs(r);
                
            }
            else
                arr[r-1]=-arr[r-1];
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                p[1]=i+1;
                
            }
        }
        
        return p;
        
        // code here
    }