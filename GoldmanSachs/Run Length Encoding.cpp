string encode(string src)
{  
    
    string ans="";
    int cnt=1;
    
    for(int i=0;i<(src.length()-1);i++){
        if(src[i]==src[i+1])
            cnt++;
        else{
            ans.push_back(src[i]);
            ans = ans + to_string(cnt);
            cnt=1;
        }
    }
    
    ans.push_back(src[src.length()-1]);
    ans = ans + to_string(cnt);
    
    return ans;
    
    
  //Your code here 
}     
 