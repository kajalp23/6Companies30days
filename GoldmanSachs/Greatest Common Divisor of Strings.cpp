string gcdOfStrings(string str1, string str2) {
        
        string p=str1+str2;
        string q=str2+str1;
        
        if(p==q){
            int r= __gcd(str1.length(),str2.length());
            return str1.substr(0,r);
        }
        
        return "";
        
}