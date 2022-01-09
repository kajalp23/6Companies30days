	string FirstNonRepeating(string A){
		    // Code here
		    
		    string s="";
		    
		    int a[26];
		    memset(a,0,sizeof(a));
		    queue<char>v;
		    
		    for(int i=0;i<A.length();i++){
		        a[A[i]-97]++;
		        if(s.length()==0){
		            s.push_back(A[i]);
		            v.push(A[i]);
		        }
		        else{
		            if(a[A[i]-97]==1)
		                v.push(A[i]);
		            while(!v.empty()){
		                char p=v.front();
		                if(a[p-97]==1){
		                    break;
		                }
		                v.pop();
		            }
		            if(v.empty())
		                s.push_back('#');
		            else
		                s.push_back(v.front());
		            
		        }
		        
		    }
		    
		    return s;
		    
		}