ull getNthUglyNo(int n) {
	    // code here
	    
        ull curr2 = 0,curr3 = 0,curr5 = 0;
        ull next2 = 2,next3 = 3,next5 = 5,nextno = 1;
        ull uglyNo[n];
     
        uglyNo[0] = 1;
        for (ull i = 1; i < n; i++) {
            nextno = min(next2,min(next3, next5));
            uglyNo[i] = nextno;
            if (nextno == next2) {
                curr2 = curr2 + 1;
                next2 = uglyNo[curr2] * 2;
            }
            if (nextno == next3) {
                curr3 = curr3 + 1;
                next3 = uglyNo[curr3] * 3;
            }
            if (nextno == next5) {
                curr5 = curr5 + 1;
                next5 = uglyNo[curr5] * 5;
            }
        } 
       
       
        return nextno;
	}