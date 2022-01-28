class Solution
{
    public:
    //Function to find the largest number after k swaps.
    
    void findMaxNum(string str, int k, string& m) 
    { 
        // return if no swaps left 
        if(k == 0) 
            return; 
      
        int n = str.length();
        for (int i = 0; i < n - 1; i++) 
        { 
            for (int j = i + 1; j < n; j++) 
            {
                if (str[i] < str[j]) 
                { 
                    swap(str[i], str[j]); 
                    if (str.compare(m) > 0) 
                        m = str;
                    findMaxNum(str, k - 1, m);
                    swap(str[i], str[j]); 
                } 
            } 
        } 
    } 

    
    
    
    string findMaximumNum(string num, int k)
    {
       string p=num;
       
       findMaxNum(num,k,p);
       
       return p;
    
       // code here.
    }
};