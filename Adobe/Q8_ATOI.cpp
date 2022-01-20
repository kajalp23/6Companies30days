int atoi(string str)
{
    int n=0,k=1,i=0;
    if(str[0]=='-'){
        k=-1;
        i=1;
    }
    while(i<str.length()){
        
        if(str[i]>=48 && str[i]<=57){
            n=n*10+(int)(str[i]-'0');
           
        }
        else
            return -1;
        i++;
    }
    
    return (n*k);
    
    //Your code here
}