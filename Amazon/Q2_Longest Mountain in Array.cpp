int longestMountain(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int cnt=0,m=0,flg=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]<arr[i] && flg){
                cnt=2;
                flg=0;
            }
            else if(arr[i-1]<arr[i])
                cnt++;
            else{
                if(arr[i]==arr[i-1]){
                    
                    cnt=0;
                }
                else if(cnt>=1){
                    cnt++;
                    m=max(m,cnt);
                    flg=1;
                }
            }
        }
       
        //m=max(m,cnt);
        return m;
    }