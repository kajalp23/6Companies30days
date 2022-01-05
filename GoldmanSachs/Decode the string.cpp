string decodedString(string s){
        // code here
        
        stack<char>st;
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                if(i>0 && s[i-1]>=48 && s[i-1]<=57)
                    st.push(s[i]);
                else{
                    st.push('1');
                    st.push(s[i]);
                }
            }
            else if(s[i]==']'){
                string p="";
                while(!st.empty() && st.top()!='['){
                    p=st.top()+p;
                    st.pop();
                }
                if(!st.empty() && st.top()=='[')st.pop();
                string q="";
                while(!st.empty() && st.top()>=48 && st.top()<=57){
                    q=st.top()+q;
                    st.pop();
                }
                int num=stoi(q);
                for(int j=0;j<num;j++){
                    res=p+res;
                }
                
                for(int j=0;j<res.length();j++)
                    st.push(res[j]);
                res="";
                
            }
            else{
                st.push(s[i]);
            }
        }
        // cout << st.size() << " ";
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            
            st.pop();
        }
        
        return ans;
        
    }