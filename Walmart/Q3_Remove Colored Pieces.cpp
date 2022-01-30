class Solution {
public:
    
    
    
    bool winnerOfGame(string colors) {
        
       int cntA=0,cntB=0;
        
        for(int i=1;i<(colors.length()-1);i++){
            if(colors[i]==colors[i-1] && colors[i]==colors[i+1]){
                if(colors[i]=='A')
                    cntA++;
                else
                    cntB++;
            }
        }
        
        return (cntA>cntB);
        
    }
};